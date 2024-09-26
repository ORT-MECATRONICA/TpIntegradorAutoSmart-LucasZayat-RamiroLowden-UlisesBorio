// Zayat , Borio , Lowden | 5-A
int buzzerPin = 15;  // Pin digital para el buzzer
float corrienteMax = 2000;  // Umbral de corriente máxima en mA

void setup() {
  pinMode(buzzerPin, OUTPUT);  // Configurar el pin del buzzer como salida
  Serial.begin(115200);        // Inicializar la comunicación serie
}

void loop() {
  float corriente = 1800;  // Este valor debe provenir del sensor INA219 en el proyecto final
  
  // Activar el buzzer si la corriente excede el umbral
  if (corriente > corrienteMax) {
    digitalWrite(buzzerPin, HIGH);  // Encender el buzzer
    Serial.println("¡Alerta! Corriente excesiva detectada.");
  } else {
    digitalWrite(buzzerPin, LOW);   // Apagar el buzzer
    Serial.println("Corriente normal.");
  }

  delay(2000);  // Esperar 2 segundos antes de verificar nuevamente
}
