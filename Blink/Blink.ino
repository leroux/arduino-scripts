int buttonPin = 2;
int i = 0, j = 0, k = 0;
int wait = 50;

void setup() {
  for (i = 6; i <= 13; i++)
    pinMode(i, OUTPUT);
    
  pinMode(buttonPin, INPUT);
 
  randomSeed(analogRead(0));
}

void loop() {
  /*
  for (i = 0; i <= 3; i++) {
    digitalWrite(6 + i, HIGH);
    delay(300);
    digitalWrite(13 - i, HIGH);
    delay(300);
  }
  
  for (i = 0; i <= 7; i++) {
    digitalWrite(6 + i, LOW);
    delay(50);
  }
  */
  
  /*
  digitalWrite(random(6, 14), HIGH);
  delay(random(random(random(random(random(300))))));
  digitalWrite(random(6, 14), LOW);
  delay(random(random(random(random(random(300))))));
  */
  
  /*
  wait = 50;
  
  for (i = 0; i <= 7; i++) {
    for (j = 0; j <= i; j++) {
      digitalWrite(6 + j, HIGH);
      delay(random(100));
    }
    
    for (k = j; k >= 0; k--) {
      digitalWrite(6 + k, LOW);
      delay(random(50));
    }
  }
  
  wait = 20;
  
  for (i = 6; i >= 0; i--) {
    for (j = 0; j <= i; j++) {
      digitalWrite(6 + j, HIGH);
      delay(random(100));
    }
    
    for (k = j; k >= 0; k--) {
      digitalWrite(6 + k, LOW);
      delay(random(50));
    }
  }
  */
  
  /*
  for (i = 0; i <= 7; i++) { 
    digitalWrite(6 + i, HIGH);
    delay(20);
    
    for (k = i; k >= 0; k--) {
      digitalWrite(6 + k, LOW);
      delay(20);
    }
  }
  */
  
  /*
  for (i = 0; i <= random(9); i++) {
      digitalWrite(6 + i, HIGH);
      delay(50);
  }
    
  for (k = i; k >= 0; k--) {
    digitalWrite(6 + k, LOW);
    delay(20);
  }
  */
  
  for (i = 6; i <= 13; i++) {
    digitalWrite(i, HIGH);
    delay(10);
    digitalWrite(i, LOW);
    delay(10);
  }
}
