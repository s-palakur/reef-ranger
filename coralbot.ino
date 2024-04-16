const int valve_pin = 8; 
const int pumpPin_in =  10;  
const int pumpPin_out = 9; 

 
void setup() {
  pinMode(pumpPin_in, OUTPUT);
  pinMode(pumpPin_out, OUTPUT);
  pinMode(valve_pin, OUTPUT);
}
 
void loop() {
    digitalWrite(valve_pin, LOW);
    analogWrite(pumpPin_in, 75);
    analogWrite(pumpPin_out, 0);  
    delay(500);    
    digitalWrite(valve_pin, HIGH);
    analogWrite(pumpPin_in, 0);  
    analogWrite(pumpPin_out, 255);  
    delay(3000);              
}
