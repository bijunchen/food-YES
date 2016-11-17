//Vibrating the motor whenever you buddy makes the "shall we go?" gesture
//special thanks: Mudit Ganguly

#define trigPin 7
#define echoPin 6


const int motorPin = 8;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(motorPin, OUTPUT);
 
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
 

  if (distance <= 30) {
    digitalWrite(motorPin, HIGH);

}
  else {
    digitalWrite(motorPin,LOW);
  }
  }
