// Arduino code 
char val; // Data received from the serial port
int led[8] = {13,12,11,10,9,8,7,6}; // Set led to digital I/O
 
 void setup() {

// Set led as OUTPUT
  int i;
  for (i=0;i<8;i++)
  {
    pinMode(led[i], OUTPUT);    
  }
  
 Serial.begin(9600); // Start serial communication at 9600 bps
 }
 
 void loop() {
 while (Serial.available()) {
 val = Serial.read(); // read Data and store in val
  
  if (val == '1') {digitalWrite(led[0], HIGH);}
  if (val == 'a') {digitalWrite(led[0], LOW);} 
  
  if (val == '2') {digitalWrite(led[1], HIGH);}
  if (val == 'b') {digitalWrite(led[1], LOW);} 
  
  if (val == '3') {digitalWrite(led[2], HIGH);}
  if (val == 'c') {digitalWrite(led[2], LOW);} 
  
  if (val == '4') {digitalWrite(led[3], HIGH);}
  if (val == 'd') {digitalWrite(led[3], LOW);} 
  
  if (val == '5') {digitalWrite(led[4], HIGH);}
  if (val == 'e') {digitalWrite(led[4], LOW);} 
  
  if (val == '6') {digitalWrite(led[5], HIGH);}
  if (val == 'f') {digitalWrite(led[5], LOW);} 
  
  if (val == '7') {digitalWrite(led[6], HIGH);}
  if (val == 'g') {digitalWrite(led[6], LOW);} 
  
  if (val == '8') {digitalWrite(led[7], HIGH);}
  if (val == 'h') {digitalWrite(led[7], LOW);} 
  }     
 }

