#include <Math.h>;

const int potPin = A0; // pin A0 to read analog input
int value; // save analog value

void setup() {
   
  pinMode(potPin, INPUT); 
  Serial.begin(9600);
}

void loop() {
  
  value = analogRead(potPin);          //Read and save analog value from potentiometer
  float calibration_metric = 52.0/1023;
  float calibration_imperial = 2.047/1023;

  float inches = calibration_imperial * value;
  float milli = calibration_metric * value;
//  Serial.print(inches);
//  Serial.println(" inches");
  Serial.print(milli);
  Serial.println(" millimeters");
  // Serial.println(value);
  delay(100);                          //Small delay
  
}
