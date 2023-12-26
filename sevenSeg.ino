int segPinA = 9;// led 7 green
int segPinB = 8;// led 6 yellow
int segPinC = 5;// led 2 brown
int segPinD = 6;// led 3 red
int segPinE = 7;// led 4 orange
int segPinF = 10;// led 9 blue
int segPinG = 11;// led 10 purple

void setup()
{
  // define pin modes

  pinMode(segPinA, OUTPUT);
  pinMode(segPinB, OUTPUT);
  pinMode(segPinC, OUTPUT);
  pinMode(segPinD, OUTPUT);
  pinMode(segPinE, OUTPUT);
  pinMode(segPinF, OUTPUT);
  pinMode(segPinG, OUTPUT);

}

void loop()
{
  ONE();
  TWO();
  THREE();
  FOUR();
  FIVE();
  SIX();
  SEVEN();
  EIGHT();
  NINE();
  ZERO();
  RESET();
  CIRCLE();
  CIRCLE();
  RESET();
  
}

void ONE() {

  digitalWrite(segPinA, LOW);
  digitalWrite(segPinB, HIGH);
  digitalWrite(segPinC, HIGH);
  digitalWrite(segPinD, LOW);
  digitalWrite(segPinE, LOW);
  digitalWrite(segPinF, LOW);
  digitalWrite(segPinG, LOW);
  delay(1000);

}

void TWO() {

  digitalWrite(segPinA, HIGH);
  digitalWrite(segPinB, HIGH);
  digitalWrite(segPinC, LOW);
  digitalWrite(segPinD, HIGH);
  digitalWrite(segPinE, HIGH);
  digitalWrite(segPinF, LOW);
  digitalWrite(segPinG, HIGH);
  delay(1000);

}

void THREE() {

  digitalWrite(segPinA, HIGH);
  digitalWrite(segPinB, HIGH);
  digitalWrite(segPinC, HIGH);
  digitalWrite(segPinD, HIGH);
  digitalWrite(segPinE, LOW);
  digitalWrite(segPinF, LOW);
  digitalWrite(segPinG, HIGH);
  delay(1000);

}

void FOUR() {

  digitalWrite(segPinA, LOW);
  digitalWrite(segPinB, HIGH);
  digitalWrite(segPinC, HIGH);
  digitalWrite(segPinD, LOW);
  digitalWrite(segPinE, LOW);
  digitalWrite(segPinF, HIGH);
  digitalWrite(segPinG, HIGH);
  delay(1000);

}

void FIVE() {

  digitalWrite(segPinA, HIGH);
  digitalWrite(segPinB, LOW);
  digitalWrite(segPinC, HIGH);
  digitalWrite(segPinD, HIGH);
  digitalWrite(segPinE, LOW);
  digitalWrite(segPinF, HIGH);
  digitalWrite(segPinG, HIGH);
  delay(1000);

}

void SIX() {

  digitalWrite(segPinA, HIGH);
  digitalWrite(segPinB, LOW);
  digitalWrite(segPinC, HIGH);
  digitalWrite(segPinD, HIGH);
  digitalWrite(segPinE, HIGH);
  digitalWrite(segPinF, HIGH);
  digitalWrite(segPinG, HIGH);
  delay(1000);

}

void SEVEN() {

  digitalWrite(segPinA, HIGH);
  digitalWrite(segPinB, HIGH);
  digitalWrite(segPinC, HIGH);
  digitalWrite(segPinD, LOW);
  digitalWrite(segPinE, LOW);
  digitalWrite(segPinF, LOW);
  digitalWrite(segPinG, LOW);
  delay(1000);

}

void EIGHT() {

  digitalWrite(segPinA, HIGH);
  digitalWrite(segPinB, HIGH);
  digitalWrite(segPinC, HIGH);
  digitalWrite(segPinD, HIGH);
  digitalWrite(segPinE, HIGH);
  digitalWrite(segPinF, HIGH);
  digitalWrite(segPinG, HIGH);
  delay(1000);

}

void NINE() {

  digitalWrite(segPinA, HIGH);
  digitalWrite(segPinB, HIGH);
  digitalWrite(segPinC, HIGH);
  digitalWrite(segPinD, LOW);
  digitalWrite(segPinE, LOW);
  digitalWrite(segPinF, HIGH);
  digitalWrite(segPinG, HIGH);
  delay(1000);

}

void ZERO() {

  digitalWrite(segPinA, HIGH);
  digitalWrite(segPinB, HIGH);
  digitalWrite(segPinC, HIGH);
  digitalWrite(segPinD, HIGH);
  digitalWrite(segPinE, HIGH);
  digitalWrite(segPinF, HIGH);
  digitalWrite(segPinG, LOW);
  delay(1000);

}

void RESET() {

  digitalWrite(segPinA, LOW);
  digitalWrite(segPinB, LOW);
  digitalWrite(segPinC, LOW);
  digitalWrite(segPinD, LOW);
  digitalWrite(segPinE, LOW);
  digitalWrite(segPinF, LOW);
  digitalWrite(segPinG, LOW);
  delay(1000);

}

void CIRCLE() {

  digitalWrite(segPinA, HIGH);
  delay(100);
  digitalWrite(segPinA, LOW);
  digitalWrite(segPinB, HIGH);
  delay(100);
  digitalWrite(segPinB, LOW);
  digitalWrite(segPinC, HIGH);
  delay(100);
  digitalWrite(segPinC, LOW);
  digitalWrite(segPinD, HIGH);
  delay(100);
  digitalWrite(segPinD, LOW);
  digitalWrite(segPinE, HIGH);
  delay(100);;
  digitalWrite(segPinE, LOW);
  digitalWrite(segPinF, HIGH);
  delay(100);
  digitalWrite(segPinF, LOW);
  digitalWrite(segPinG, LOW);
  

}
