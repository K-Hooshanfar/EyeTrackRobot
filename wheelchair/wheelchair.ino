#define in1 9                                                          
#define in2 10                                                         
#define in3 11                                                          
#define in4 12                                                           
#define motorASpeedPin 13
#define motorBSpeedPin 8
int triggerPin = 7; //triggering on pin 7
int echoPin = 6;    //echo on pin 8
int const buzzPin = 5; 
char val;
int i=0;
#include <SoftwareSerial.h> 
SoftwareSerial MyBlue(2,4); // RX | TX 

void forward(int x, int y, int motorSpeed, int speedPin) {
  digitalWrite(x, HIGH);
  digitalWrite(y, LOW);
  analogWrite(speedPin, motorSpeed);
  digitalWrite(in4, HIGH);
  digitalWrite(in3, LOW);
  analogWrite(motorBSpeedPin, 255);
}


void backward(int x, int y, int motorSpeed, int speedPin) {
  digitalWrite(x, LOW);
  digitalWrite(y, HIGH);
  analogWrite(speedPin, motorSpeed);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(motorBSpeedPin, 255);

}

void right(int motorSpeed) {
 
 
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(motorBSpeedPin, motorSpeed);
analogWrite(motorASpeedPin, motorSpeed);
}

void left(int motorSpeed) {

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

    analogWrite(motorBSpeedPin, motorSpeed);
analogWrite(motorASpeedPin, motorSpeed);
}

void stopAll() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void setup() {
pinMode(8, OUTPUT);                  
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);  
pinMode(13, OUTPUT);
pinMode(triggerPin, OUTPUT);         // set trig pin as output
pinMode(echoPin, INPUT);          //set echo pin as input to capture reflected waves
pinMode(buzzPin, OUTPUT); // buzz pin is output to control buzzering

 

  Serial.begin(9600);
  MyBlue.begin(9600);

}

void loop() {
  bluetooth();
  sensor();
}
void bluetooth() {
  if(MyBlue.available() > 0){  
    val = MyBlue.read();     
  }

  if (val == 'f') {
    forward(in1, in2, 255, motorASpeedPin);
    //forward(in3, in4, 255, motorBSpeedPin);
    Serial.println("forward");
    i=0;
  }
  
  if(i==0){
  if (val == 'b') {
    backward(in1, in2, 255, motorASpeedPin);
   // backward(in3, in4, 255, motorBSpeedPin);
    Serial.println("backward");
    i++;
  }
  }
  if (val == 'r') {
    right(255);
    Serial.println("right");
    i=0;
  }
  if (val == 'l') {
    left(255);
    Serial.println("left");
    i=0;
  }
  if (val == 's') {
    stopAll();
    Serial.println("stopAll");
    i=0;
  }
}
 
void sensor() { 
  
  int duration, distance;    //Adding duration and distance
  
  digitalWrite(triggerPin, HIGH); //triggering the wave
  delay(10);
  digitalWrite(triggerPin, LOW);
  
  duration = pulseIn(echoPin, HIGH); //a special function for listening and waiting for the wave
  distance = (duration/2) / 29.1; //transforming the number to cm
  
  if(distance <= 15){
  digitalWrite(buzzPin, HIGH);  
  stopAll();
  }
 else{
// Don't buzz
digitalWrite(buzzPin, LOW);
}

}
