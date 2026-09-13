
const int sensorPin = A0; 
int moistureValue = 0;    

void setup() {
  Serial.begin(9600);     
  Serial.println("HW-080 Soil Sensor Initialized");
}

void loop() {
  moistureValue = analogRead(sensorPin); 
  
  Serial.print("Moisture Raw Value: ");
  Serial.println(moistureValue);         
  
  delay(1000);                          
}
