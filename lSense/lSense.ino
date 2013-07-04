unsigned int lSenseN = 2;
unsigned int lSenseP = 3;
unsigned int laser = 7;
unsigned int ledOut = 11;

int brightness = 0;

void setup() {
  Serial.begin(9600);

  pinMode(ledOut, OUTPUT);
  pinMode(laser, OUTPUT);

  digitalWrite(laser, HIGH);
}

void loop() {
  unsigned long int j = 0;

  pinMode(lSenseN,OUTPUT);
  pinMode(lSenseP,OUTPUT);
  digitalWrite(lSenseN,HIGH);
  digitalWrite(lSenseP,LOW);

  pinMode(lSenseN,INPUT);
  digitalWrite(lSenseN,LOW);

  for (j = 0; j < 100000; j++) {
    if (digitalRead(lSenseN) == 0) break;
  }

  if (j > 50000)
    digitalWrite(ledOut, HIGH);
  else
    digitalWrite(ledOut, LOW);
 
  /*
  if (j < 20000) {
    for (brightness = 255; brightness >= 0; brightness--) {
      analogWrite(ledOut, brightness);
      delay(10);
    }
  }
  */
  
  Serial.println(j);
}

