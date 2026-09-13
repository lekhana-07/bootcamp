const int lightPin = A0; 

void setup() {
  Serial.begin(9600);    
}

void loop() {
  int lightValue = analogRead(lightPin); 
  
  Serial.print("Light Intensity: ");
  Serial.println(lightValue);          
  
  delay(500);                          
}

