#define BLYNK_TEMPLATE_ID "TMPL3Qod-Y3Hh"
#define BLYNK_TEMPLATE_NAME "Device01"
#define BLYNK_AUTH_TOKEN "iCb6t3vjRIx0RVZzCpEQ8_oY3E6fmUYo"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Note10";
char pass[] = "qwertyuiop";

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
