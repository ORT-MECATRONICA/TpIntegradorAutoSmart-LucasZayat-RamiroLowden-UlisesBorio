// Zayat , Lowden , Borio | 5-A

#include <Wire.h>
#include <Adafruit_AHTX0.h>  // Librería para el sensor AHT10

Adafruit_AHTX0 aht;  // Crear un objeto AHT10

void setup() {
  Serial.begin(115200);  // Inicializar la comunicación serie

  // Inicializar el sensor AHT10
  if (!aht.begin()) {
    Serial.println("No se pudo encontrar AHT10. Verifica las conexiones.");
    while (1) delay(10);  // Detener el código si falla
  }
}

void loop() {
  // Leer temperatura y humedad del sensor AHT10
  sensors_event_t humidity, temp;
  aht.getEvent(&humidity, &temp);

  // Mostrar los datos en el monitor serie
  Serial.print("Temperatura: ");
  Serial.print(temp.temperature);
  Serial.println(" ºC");

  Serial.print("Humedad: ");
  Serial.print(humidity.relative_humidity);
  Serial.println(" %");
  
  delay(2000);  // Esperar 2 segundos antes de la próxima lectura
}
