#if defined(ESP32)
#include <WiFi.h>
#elif defined(ESP8266)
#include <ESP8266WiFi.h>
#endif

#include <ESP8266WiFi.h>
#include <WiFiManager.h>

WiFiManager wifiManager;


void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    wifiManager.setTimeout(150);  // hotspot visibility for 5 minutes
    wifiManager.autoConnect("espwifitest","espwifitest");  //set the hotspot name and password
    Serial.println("Connected via WifiManager....."); 
    
    Serial.print("Connected with IP: ");
    Serial.println(WiFi.localIP());
    Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:
 if(WiFi.status()!= WL_CONNECTED)
         {
           wifiManager.setTimeout(150);  // hotspot visibility for 3 minutes
           wifiManager.autoConnect("espwifitest","espwifitest");  //set the hotspot name and 
         }   
}
