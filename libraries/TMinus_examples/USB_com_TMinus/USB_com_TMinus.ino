void setup() {                
  pinMode(16, OUTPUT); // init LED     

  Serial.begin(9600); // init serial communication @ 9600 baud
  // serial is the USB connection
  // for Transmitter Serial1, Serial2 or Serial 3 are used 
  // dependant on the used poort

}

void loop() {
  
  // it is very good practice to having a blinking LED 
  // this indicates that the programm is running  
  digitalWrite(16, HIGH);   // set the LED on
  delay(500);              // wait for half a second

  digitalWrite(16, LOW);    // set the LED off
  delay(500);              // wait for half a second
  
  Serial.println("USB"); // prints USB and starts new line
 
  Serial.print("hello world"); // prints USB without new ling
 
  Serial.println();  // starts new line 


}
