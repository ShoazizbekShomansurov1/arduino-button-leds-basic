int led = 3;
int led2 = 4;
int led3 = 5;
int firstButton = 6;
int secondButton = 7;
int thirdButton = 8;

void setup(){
  pinMode (led,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);
  pinMode (firstButton,INPUT);
  pinMode (secondButton,INPUT);
  pinMode (thirdButton,INPUT);
}
  
void loop(){
  if (digitalRead(firstButton) == HIGH){
    digitalWrite (led,HIGH);
    digitalWrite (led2,LOW);
    digitalWrite (led3,LOW);
  }
  else if (digitalRead(secondButton) == HIGH){
    digitalWrite (led,LOW);
    digitalWrite (led2,HIGH);
    digitalWrite (led3,LOW);
  }
  else if (digitalRead(thirdButton) == HIGH){
    digitalWrite (led,LOW);
    digitalWrite (led2,LOW);
    digitalWrite (led3,HIGH);
  }
  else {
    digitalWrite (led,LOW);
    digitalWrite (led2,LOW);
    digitalWrite (led3,LOW);
  }
    
}
