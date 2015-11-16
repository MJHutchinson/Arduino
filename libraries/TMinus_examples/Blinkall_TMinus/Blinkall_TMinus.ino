void setup() {                
  pinMode(16, OUTPUT);  // init LED
  pinMode(17, OUTPUT);  // init LED
  pinMode(18, OUTPUT);  // init LED
  pinMode(19, OUTPUT);  // init LED
  pinMode(20, OUTPUT);  // init LED
  pinMode(21, OUTPUT);  // init LED
  pinMode(22, OUTPUT);  // init LED
  pinMode(23, OUTPUT);  // init LED
}

void loop() {
  digitalWrite(16, HIGH);   // set LED off
  digitalWrite(17, HIGH);   // set LED off
  digitalWrite(18, HIGH);   // set LED off
  digitalWrite(19, HIGH);   // set LED off
  digitalWrite(20, HIGH);   // set LED off
  digitalWrite(21, HIGH);   // set LED off
  digitalWrite(22, HIGH);   // set LED off
  digitalWrite(23, HIGH);   // set LED off
  delay(1000);              // wait for a second
  digitalWrite(16, LOW);    // set LED on
  digitalWrite(17, LOW);    // set LED on
  digitalWrite(18, LOW);    // set LED on
  digitalWrite(19, LOW);    // set LED on
  digitalWrite(20, LOW);    // set LED on
  digitalWrite(21, LOW);    // set LED on
  digitalWrite(22, LOW);    // set LED on
  digitalWrite(23, LOW);    // set LED on
  delay(1000);              // wait for a second
}
