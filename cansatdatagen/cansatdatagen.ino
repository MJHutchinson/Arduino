void setup(){
  
  Serial.begin(9600);

}

void loop(){

  byte start = 255;
  Serial.write(start);
  Serial.write(start);
  
  //mpu
  long t = millis();  
  Serial.write(t >> 24);
  Serial.write(t >> 16);
  Serial.write(t >> 8);
  Serial.write(t);
  
  for(int i = 0; i < 9 ; i++){
    int x = random();
    Serial.write(x >> 8);
    Serial.write(x);
  }
  
  //alt
  t = millis();  
  Serial.write(t >> 24);
  Serial.write(t >> 16);
  Serial.write(t >> 8);
  Serial.write(t);
  
  int x = -4885;
  Serial.write(x >> 8);
  Serial.write(x);
  
  
  //gps
  t = millis();  
  Serial.write(t >> 24);
  Serial.write(t >> 16);
  Serial.write(t >> 8);
  Serial.write(t);
  
  for(int i = 0; i < 2 ; i++){
    long x = random();
    Serial.write(x >> 24);
    Serial.write(x >> 16);
    Serial.write(x >> 8);
    Serial.write(x);
  } 
 
  //sam
  t = millis();  
  Serial.write(t >> 24);
  Serial.write(t >> 16);
  Serial.write(t >> 8);
  Serial.write(t);
  
  for(int i = 0; i < 3 ; i++){
    int x = random();
    Serial.write(x >> 8);
    Serial.write(x);
  }
  
  byte chksm = 84;
  Serial.write(chksm);
  
  byte end = 0;
  Serial.write(end);
  Serial.write(end);
  
  delay(1000);
  
}
