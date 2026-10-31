
#define SOIL_SENSOR_PIN 34

void setup() {
  Serial.begin(115200);
  pinMode(SOIL_SENSOR_PIN, INPUT);
  Serial.println("Soil Moisture Monitoring System");
}

void loop() {
  int moistureValue = analogRead(SOIL_SENSOR_PIN);

  Serial.print("Soil Moisture Sensor Value: ");
  Serial.println(moistureValue);

  delay(1000);
}

