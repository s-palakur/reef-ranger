const int pumpPin =  9;  
 
 
void setup() {
  pinMode(pumpPin, OUTPUT);
}
 
void loop() {
    digitalWrite(pumpPin, HIGH);  
    delay(500);                   
    digitalWrite(pumpPin, LOW);    
    delay(5000);              
}
