#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "YOUR_TEMPLATE_NAME"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

BLYNK_WRITE(V0)
{
  int value = param.asInt();
   if (value == 1)
  {
    digitalWrite(2, HIGH);
  }
  else if (value == 0)
  {
    digitalWrite(2, LOW);
  }
}

void setup()
{
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  pinMode(2, OUTPUT);
}

void loop()
{
  Blynk.run();
}
