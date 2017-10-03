#pragma once
#include <Arduino.h>

class EspUpdater {
	public:
	EspUpdater(String updateUrl, String currentVersion) :
		updateUrl(updateUrl), currentVersion(currentVersion) {};
	void update();
	private:
	String updateUrl;
	String currentVersion;
};
