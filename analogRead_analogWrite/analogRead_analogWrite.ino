const int analogInPin = 0;  // Analog input pin that the
                            // potentiometer is attached to
const int analogOutPin = 9; // Analog output pin that the LED 
                            // is attached to
                            
int sensorValue;        // value read from the pot

void setup() {
  pinMode(analogOutPin,OUTPUT);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);    
          
  // change the analog out value:
  analogWrite(analogOutPin, sensorValue);           

  // wait 10 milliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading
  delay(10);                     
}
