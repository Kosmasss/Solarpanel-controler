#include <Arduino.h>
#include <WiFi.h>
#include <FS.h>
#define Relay_pin D3

int relay_state=LOW;

const char *name="wifi";
const char *psd= "das";

int voidsetup() {
  Serial.begin(9600);
  pinMode(Relay_pin, OUTPUT);
  digitalWrite(Relay_pin, relay_state);


  WiFi.begin(name,psd); {
   while (WiFi.status() != WL_CONNECTED)
   Serial.println("connecting to wifi");
  }
  Serial.println("connected to wifi");

  Serial.print("Arduino Nano ESP32 Web Server's IP address: ");
  Serial.println(WiFi.localIP());


}

int voidloop() {

}