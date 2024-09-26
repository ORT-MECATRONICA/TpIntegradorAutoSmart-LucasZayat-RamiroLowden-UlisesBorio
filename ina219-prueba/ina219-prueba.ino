// Zayat , Lowden , Borio | 5-A

#include <Wire.h>
#include <Adafruit_INA219.h>  // Librería para el sensor INA219

Adafruit_INA219 ina219;  // Crear un objeto INA219

void setup() {
  Serial.begin(115200);  // Inicializar la comunicación serie

  // Inicializar el sensor INA219
  if (!ina219.begin()) {
    Serial.println("No se pudo encontrar INA219. Verifica las conexiones.");
    while (1) delay(10);  // Detener el código si falla
  }
}

void loop() {
  // Leer la corriente en miliamperios (mA)
  float corriente = ina219.getCurrent_mA();
  
  // Mostrar el valor de la corriente en el monitor serie
  Serial.print("Corriente: ");
  Serial.print(corriente);
  Serial.println(" mA");

  delay(2000);  // Esperar 2 segundos antes de la próxima lectura
}
