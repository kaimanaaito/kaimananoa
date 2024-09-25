// identify which pins we connect to
#define buttonA  4 // button A
#define buttonB  8 // button B
#define led      13 // LED pin
#define buzzer1  12 // first buzzer pin
#define buzzer2  11 // second buzzer pin (新しいブザー)

// bool just means that something can be 'true' or 'false' (HIGH or LOW)
bool buttonStatusA; // button A status
bool buttonStatusB; // button B status

// these four lines of code just make the rest of the code easier to understand
#define NOTPUSHED HIGH
#define PUSHED    LOW
#define AND       &&
#define OR        ||


// the "setup" code runs one time when you first run the program
void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer1, OUTPUT);
  pinMode(buzzer2, OUTPUT); // 新しいブザーの設定

  pinMode(buttonA, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);
}

// the "loop" code runs over and over again
void loop() {
  buttonStatusA = digitalRead(buttonA); // read button A status
  buttonStatusB = digitalRead(buttonB); // read button B status

  // if both buttons are pushed, turn on the LED and both buzzers
  if ((buttonStatusA == PUSHED) AND (buttonStatusB == PUSHED)) {
    digitalWrite(led, HIGH); // turn the LED on
    digitalWrite(buzzer1, HIGH); // turn on first buzzer
    digitalWrite(buzzer2, HIGH); // turn on second buzzer
  } else {
    digitalWrite(led, LOW);  // turn the LED off
    digitalWrite(buzzer1, LOW); // turn off first buzzer
    digitalWrite(buzzer2, LOW); // turn off second buzzer
  }
}
