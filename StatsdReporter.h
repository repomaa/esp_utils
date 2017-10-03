#pragma once
#include <Arduino.h>

class StatsdReporter {
	public:
	StatsdReporter(const char *host, uint16_t port) : host(host), port(port) {};
	void count(String metric, int value = 1);
	void gauge(String metric, float value);
	void measure(String metric, float value);
	
	private:

	const char *host;
	uint16_t port;
	void sendMessage(String message);
};
