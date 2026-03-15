#include <Servo.h>
#define trigPin 12
Servo servo; // this codes in the servo to the entire code
int sound = 250;
const int echoPin = 10;
long duration;
int distance;
int pos = 0;
Servo myservo;
void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
servo.attach(9);
myservo.attach(8);
}

void loop() {
  servo.attach(9); // servo has different numbers for each servo to lower confusion
  myservo.attach(8);// myservo is the second servo
  myservo.write(180);
  long duration, distance;
  digitalWrite(trigPin, LOW); // the purpose of a trigPin is to send out pings to the arduino to tell the the servos to turn as there is something in the way
  delayMicroseconds(2); // the delay is extremely low to enhance the smooth turning of our robot Vinny
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1; // how close we want the ultrasonic sensor to be before it reacts
if (distance < 10) {
  Serial.println("The distance is too close");
  servo.write(90);
  delay (100);
} else {
  servo.write(0);
}
if (distance > 60  || distance<= 0) { 
Serial.println("The distance is more than 60"); // the distance it displays on the serial monitor
} else {
  Serial.print(distance);
Serial.println(" cm"); // the exact distance on how far/close an object is from the robot
} 
delay(10); // this delay is to customize how fast the robot reacts, we made it 10 because we want our robot Vinny to be very fast
  
}
