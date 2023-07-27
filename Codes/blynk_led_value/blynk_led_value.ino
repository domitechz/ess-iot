//  https://docs.blynk.io/en/blynk.cloud/update-datastream-value
//  https://{server_address}/external/api/update?token={token}&{pin}={value}
//  https://blr1.blynk.cloud/external/api/update?token=iCb6t3vjRIx0RVZzCpEQ8_oY3E6fmUYo&v0=0

#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "YOUR_TEMPLATE_NAME"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

BlynkTimer timer;

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

void myTimerEvent()
{
  Blynk.virtualWrite(V1, random(0, 50));
}

void setup()
{
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  pinMode(2, OUTPUT);
  timer.setInterval(1000, myTimerEvent);
}

void loop()
{
  Blynk.run();
  timer.run();
}
