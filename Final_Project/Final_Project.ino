
#define player1 3
#define player2 11
#define Switchbutton 2
#define redLED 12
#define greenLED 13

  
int current = 0;
int old = 0;
int buttonPoll = 0;
int p1old = 0;
int p1new = 0;
int score1 = 0;
int p2old = 0;
int p2new = 0;
int score2 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(Switchbutton, INPUT);
  pinMode(player1, INPUT);
  pinMode(player2, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(redLED,OUTPUT);
  pinMode(greenLED, OUTPUT);

  digitalWrite(redLED,LOW);
  digitalWrite(greenLED,LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonPoll = digitalRead(Switchbutton);
  if(buttonPoll == 1){
    buttonPoll = digitalRead(Switchbutton);
    if(buttonPoll == 0){
      current = old + 1;
    }}
    switch (current){
      case 1:
        digitalWrite(greenLED, HIGH);
        digitalWrite(redLED, LOW);
        old = current;
        break;
      case 2:
        digitalWrite(greenLED, LOW);
        digitalWrite(redLED, HIGH);
        delay(1000);
        current = old;
      break;
      //
    }
  score1 = digitalRead(player1);
  if(score1 == 1){
    score1 = digitalRead(player1);
    if(score1 == 0){
      p1new = p1old + 1;
    }}
    switch (p1new){
      case 1:
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW); 
        digitalWrite(8, LOW); 
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        p1old = p1new;
        break;
      case 2:
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW); 
        digitalWrite(8, LOW); 
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        p1old = p1new;
        break;
      case 3:
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW); 
        digitalWrite(8, LOW); 
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        p1old = p1new;
        break; 
      case 4:
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH); 
        digitalWrite(8, LOW); 
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        p1old = p1new;
      break;
    }
  score2 = digitalRead(player2);
  if(score2 == 1){
    score2 = digitalRead(player2);
    if(score2 == 0){
      p2new = p2old + 1;
    }}
    switch (p2new){
      case 1:
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW); 
        digitalWrite(8, LOW); 
        digitalWrite(9, LOW);
        digitalWrite(10, HIGH);
        p2old = p2new;
        break;
      case 2:
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW); 
        digitalWrite(8, LOW); 
        digitalWrite(9, HIGH);
        digitalWrite(10, LOW);
        p2old = p2new;
        break;
      case 3:
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW); 
        digitalWrite(8, HIGH); 
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        p2old = p2new;
        break; 
      case 4:
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH); 
        digitalWrite(8, LOW); 
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        p2old = p2new;
      break;
    }
}
