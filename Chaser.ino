bool userIn;
int delayTime = 0;

void setup() {
  for(int pinNum = 2; pinNum < 12; pinNum++){
  pinMode(pinNum, OUTPUT);
  }
}

void loop(){
  //switch forward
  for(int pinNum = 2; pinNum < 12; pinNum++){
  digitalWrite(pinNum, HIGH);  //switch on
  hDelay(100);  //delay
  digitalWrite(pinNum, LOW); //switch off
  }
  
  //switch backwards
  for(int pinNum = 11; pinNum > 1; pinNum--){
  digitalWrite(pinNum, HIGH);
  hDelay(100);
  digitalWrite(pinNum, LOW);
  }
}
  /////
  void hDelay(int input){
  userIn = digitalRead(12);
    if(userIn == true){
    delayTime = 0;
    }  
    
    if (delayTime > 50 ){
      while(true){}
    }
  
  delay(input);
}

