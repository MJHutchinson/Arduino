long last_three = 0;
long last_four = 0;
long last_five = 0;
long last_six = 0;
long last_seven = 0;
long last_eight = 0;
long last_nine = 0;

int _delay = 40;

void setup(){

  for(int i = 3; i < 10 ; i++){
    pinMode(i, INPUT_PULLUP);
  }
  
  Keyboard.begin();
  
}

void loop(){

  long time = millis();
  
  if(digitalRead(3) == LOW && (time - last_three > 300)){
    do_three();
    last_three = millis();
  }
  
  if(digitalRead(4) == LOW && (time - last_four > 300)){
    do_four();
    last_four = millis();
  }
  
  if(digitalRead(5) == LOW && (time - last_five > 300)){
    do_five();
    last_five = millis();
  }
  
  if(digitalRead(6) == LOW && (time - last_six > 300)){
    do_six();
    last_six = millis();
  }
  
  if(digitalRead(7) == LOW && (time - last_seven > 300)){
    do_seven();
    last_seven = millis();
  }
  
  if(digitalRead(8) == LOW && (time - last_eight > 300)){
    do_eight();
    last_eight = millis();
  }
  
  if(digitalRead(9) == LOW && (time - last_nine > 300)){
    do_nine();
    last_nine = millis();
  } 
  
}

void do_three(){

  Keyboard.press('q');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('f');
  delay(_delay);
  Keyboard.press('q');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('f');
  delay(_delay);
  Keyboard.press('q');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('f');
  delay(_delay);
  Keyboard.press('a');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('s');
  delay(_delay);
}

void do_four(){
  
//  Mouse.begin();
//  Mouse.click(MOUSE_RIGHT);
//  Keyboard.print("dqrqrqrqr");
//  Mouse.end();

  Keyboard.press('d');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('q');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('r');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('q');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('r');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('q');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('r');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('q');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('r');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  
}

void do_five(){
  
  Keyboard.press('s');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('q');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('f');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('s');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('a');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('s');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);

}

void do_six(){

  Keyboard.press('d');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('s');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('r');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('s');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('r');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  
}

void do_seven(){

  Keyboard.press('q');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('r');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('a');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('e');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('a');
  delay(_delay);
  Keyboard.releaseAll();
  delay(_delay);
  Keyboard.press('a');
  delay(_delay);
  Keyboard.releaseAll();

}

void do_eight(){}

void do_nine(){}
