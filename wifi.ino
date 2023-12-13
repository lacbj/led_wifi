
/*//Librerias para ESP32
#include <WiFi.h>
#include <WiFiMulti.h>
WiFiMulti wifiMulti;




const uint32_t TiempoEsperaWifi = 5000;

void setup() {
  Serial.begin(115200);
  Serial.println("\nIniciando multi Wifi");

  wifiMulti.addAP("Familia crespo", "Jacob4.34");
  wifiMulti.addAP("Speedy-Fibra-5GHz-8B1603", "CB3a623e8626we7f3N8d");
  wifiMulti.addAP("ssid_3", "contrasenna_3");

  WiFi.mode(WIFI_STA);
  Serial.print("Conectando a Wifi ..");
  while (wifiMulti.run(TiempoEsperaWifi) != WL_CONNECTED) {
    Serial.print(".");
  }
  Serial.println(".. Conectado");
  Serial.print("SSID:");
  Serial.print(WiFi.SSID());
  Serial.print(" ID:");
  Serial.println(WiFi.localIP());
}

void loop() {
  ActualizarWifi();

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("Codigo con Wifi");
  } else {
    Serial.println("Codigo sin Wifi");
  }
  delay(1000);
}

void ActualizarWifi() {
  if (wifiMulti.run(TiempoEsperaWifi) != WL_CONNECTED) {
    Serial.println("No conectado a Wifi!");
  }
}*/