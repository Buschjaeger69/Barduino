#include <string.h>

void setup() {
	Serial.begin(9600);  //serieller Monitor wird gestartet, Baudrate auf 9600 festgelegt
	
}

void loop() {

	String test = "A1|B3|D1|b100|c220|0";
	String command = "";
	int stelle = 0;
	char c1;
	char c2;

	while (test.length() > 0) {
		if (test.charAt(0)=='0') {
			break;
		}
		stelle = test.indexOf("|");
		command = test.substring(0, stelle);
		test = test.substring(stelle + 1);
		Serial.print("t2:");
		Serial.println(command);
		Serial.print("t1:");
		Serial.println(test);

		// Hier command weiter verarbeiten
	}
		
	

	
	delay(6000);
}
