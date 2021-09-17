#define BLYNK_PRINT Serial // deklarasi

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "***************************";
char ssid[] = "NamaHostpot";
char pass[] = "NamaPasswordHostpot";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk,run();
}
