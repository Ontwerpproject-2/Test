// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       test.ino
    Created:	8/02/2021 10:28:06
    Author:     LAPTOP-GTQ9A07G\Stan
*/

// Define User Types below here or use a .h file
//


// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//

// The setup() function runs once each time the micro-controller starts
int ledPin = 2;

void setup() {
	pinMode(ledPin, OUTPUT);
	Serial.begin(115200);
	//Christophe
}


void loop() {
	Serial.print("Hello");
	digitalWrite(ledPin, HIGH);
	delay(100);

	Serial.print("World");
	digitalWrite(ledPin, LOW);
	delay(100);
}

