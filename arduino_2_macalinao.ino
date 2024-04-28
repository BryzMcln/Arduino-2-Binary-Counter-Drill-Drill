const int redLed = 3;       
const int blueLed = 5;      
const int greenLed = 4;   
const int buttonPin = 2; 
int buttonValue = 0;     
int count = 0;         


void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(redLed, OUTPUT); // Red LED
  pinMode(greenLed, OUTPUT); // Green LED
  pinMode(blueLed, OUTPUT); // Blue LED
}

void loop() {
  buttonValue = digitalRead(buttonPin);
  if (buttonValue == HIGH) {
    count++;

    if (count == 8) {
      count = 0;
    }
    if (count == 0) {
      digitalWrite(redLed, LOW); //0
      digitalWrite(blueLed, LOW); //0
      digitalWrite(greenLed, LOW); //0
    }
    else if (count == 1) {
      digitalWrite(redLed, LOW); //0
      digitalWrite(greenLed, LOW); //0
      digitalWrite(blueLed, HIGH); //1
    }
    else if (count == 2) {
      digitalWrite(redLed, LOW); //0
      digitalWrite(greenLed, HIGH); //1
      digitalWrite(blueLed, LOW); //0
    }
    else if (count == 3) {
      digitalWrite(redLed, LOW); //0
      digitalWrite(greenLed, HIGH); //1
      digitalWrite(blueLed, HIGH); //1
    }
    else if (count == 4) {
      digitalWrite(redLed, HIGH); //1
      digitalWrite(greenLed, LOW);//0
      digitalWrite(blueLed, LOW);//0
    }
    else if (count == 5) {
      digitalWrite(redLed, HIGH); //1
      digitalWrite(greenLed, LOW);//0
      digitalWrite(blueLed, HIGH);//1
    }
    else if (count == 6) {
      digitalWrite(redLed, HIGH); //1
      digitalWrite(greenLed, HIGH); //1
      digitalWrite(blueLed, LOW); //0
    }
    else if (count == 7) {
      digitalWrite(redLed, HIGH); //1
      digitalWrite(greenLed, HIGH); //1
      digitalWrite(blueLed, HIGH); //1
    }

    delay(250);
  }
}
