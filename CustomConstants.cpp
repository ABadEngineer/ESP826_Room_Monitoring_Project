
#include "CustomConstants.h"

namespace CustomConstants
{
	const unsigned long baudRate = 115200;

	const std::string wifi_ssid("Shadow");
	const std::string wifi_pswd("H4rcs4b4jusz!");

	const int dhtPin = 4;
	const int dhtType = 22;     //dht22 = 22; dht11 = 11; dht21 = 21; AM2301 = 21

	const String javaServerName = "Java";
	const String javaServerURL = "/ServletExample/ESPServlet";
	const String javaServerContentType = "application/x-www-form-urlencoded";
	const String javaServerIP = "192.168.38.152";
	const short javaServerPort = 8081;
	const int javaServerTimeToWait = 5000;
	const int javaServerTimeOut = 3000;

	const int clientHandlerRetryWindow = 10000;
	const int clientHandlerTargetMillsWindow = 50000;
}