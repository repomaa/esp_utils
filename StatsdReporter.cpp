#include <WiFiUdp.h>
#include "StatsdReporter.h"
#include "Logger.h"
#include "MinMax.h"

void StatsdReporter::count(String metric, int value) {
	String message = metric;
	message += ":";
	message += value;
	message += "|c";

	sendMessage(message);
	DEBUG_LOGF("Count %s:\t%.2f sent\n", metric.c_str(), value);
}

void StatsdReporter::gauge(String metric, float value) {
	String message = metric;
	message += ":";
	message += value;
	message += "|g";

	sendMessage(message);
	DEBUG_LOGF("Gauge %s:\t%.2f sent\n", metric.c_str(), value);
}

void StatsdReporter::sendMessage(String message) {
	WiFiUDP UDP;

	byte buffer[128];
	int bytesWritten = 0;

	UDP.beginPacket(host, port);
	while (bytesWritten < message.length()) {
		String substring = message.substring(bytesWritten);
		int length = substring.length();
		substring.getBytes(buffer, 128);
		UDP.write(buffer, min(length, 128));
		bytesWritten += length;
	}

	UDP.endPacket();
}
