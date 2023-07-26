#include <WiFi.h>

void setup()
{
    Serial.begin(115200);
    WiFi.mode(WIFI_STA);
    delay(100);
}

void loop()
{
    int n = WiFi.scanNetworks();
    Serial.println("Scan done");
    if (n == 0) {
        Serial.println("no networks found");
    } else {
        Serial.print(n);
        Serial.println(" networks found");
        for (int i = 0; i < n; ++i) {
            Serial.print(WiFi.SSID(i).c_str());
            Serial.print('\t');
            Serial.print( WiFi.RSSI(i));
            Serial.println();
            delay(10);
        }
    }
    Serial.println("");
    WiFi.scanDelete();
    delay(5000);
}
