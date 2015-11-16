void setup() {                
  pinMode(16, OUTPUT);  // init LED
 
  Serial.begin(9600);  // init Serial

}

void loop() {

  // varables used
  int Analog0; // the analog input
  float Analog0float; // the float version of analog
  float Analog0withcalc; // making a calculation
  
  digitalWrite(16, HIGH);   // set the LED on
  delay(500);              // wait for half a second
  digitalWrite(16, LOW);    // set the LED off
  delay(500);              // wait for half a second
  
  Analog0 = analogRead(A0); // reading tha analog value

  Analog0float = (float)Analog0; // chaging to floating point variable
  
  Analog0withcalc = Analog0float * 2 / 1012; // calculating with variables
  
  // the above two lines can be combined to make:
  Analog0withcalc = (float)Analog0 * 2 / 1012;
    
  Serial.println("USB");
  
  Serial.print("Analog0: ");
  Serial.println(Analog0);
  Serial.print("Floating point version of Analog0: ");
  Serial.println(Analog0float);
  Serial.print("making a calculation: ");
  Serial.print(Analog0withcalc);
  Serial.println(" equals Analog0 * 2 / 1012");

  Serial.println("");

 
}
