// Zayat , Borio , Lowden | 5-A

int releCooler = 5;  // Pin digital para el relé del cooler
int umbralTemp = 28;  // Umbral de temperatura para encender el cooler

void setup() {
  pinMode(releCooler, OUTPUT);  // Configurar el pin del relé como salida
  Serial.begin(115200);         // Inicializar la comunicación serie
}

void loop() {
  float temperatura = 30;  // Este valor debe provenir del sensor AHT10 en el proyecto final
  
  // Controlar el cooler basado en la temperatura
  if (temperatura > umbralTemp) {
    digitalWrite(releCooler, HIGH);  // Enciende el cooler si la temperatura es mayor al umbral
    Serial.println("Cooler encendido");
  } else {
    digitalWrite(releCooler, LOW);   // Apaga el cooler si la temperatura es menor o igual al umbral
    Serial.println("Cooler apagado");
  }
  
  delay(2000);  // Esperar 2 segundos antes de verificar nuevamente
}
