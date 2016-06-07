#include <Servo.h>
Servo myservo; 

void setup() {
	// put your setup code here, to run once:
	Serial.begin(9600);
	myservo.attach(9); 
	myservo.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:
	int valor=myservo.read();
	myservo.write(45);
	delay(200);
	myservo.write(90);
	delay(2000);
	myservo.write(250);
	delay(1500);
	Serial.println(valor);

}

