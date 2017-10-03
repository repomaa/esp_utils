#include <ESP8266httpUpdate.h>
#include "EspUpdater.h"
#include "Logger.h"

void EspUpdater::update() {
	INFO_LOGF("Checking for updates from %s...", updateUrl.c_str());
	switch(ESPhttpUpdate.update(updateUrl, currentVersion)) {
	case HTTP_UPDATE_FAILED:
		ERROR_LOGF(
			"Update failed. Error (%d): %s\n",
			ESPhttpUpdate.getLastError(),
			ESPhttpUpdate.getLastErrorString().c_str()
		);
		break;
	case HTTP_UPDATE_NO_UPDATES:
		INFO_LOGLN("No updates available.");
		break;
	case HTTP_UPDATE_OK:
		INFO_LOGLN("Update ok");
		break;
	}
}
