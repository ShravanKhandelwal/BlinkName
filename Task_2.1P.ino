const int ledPin = 13; // Led Pin Number

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  char msg[] = "SHRAVAN"; // Storing The Name in An Array
  int mesgLength = strlen(msg);

  for (int i = 0; i < mesgLength; i++) {
    char x = toupper(message[i]); // Convert character to uppercase

    switch (x) {
      case 'S':
        blinking_func("...");
        break;
      case 'H':
        blinking_func("....");
        break;
      case 'R':
        blinking_func(".-.");
      case 'A':
        blinking_func(".-");
        break;
      case 'V':
        blinking_func("...-");
        break;
      case 'N':
        blinking_func("-.");
        break;
      default:
        delay(300);
        break;
    }
    
    delay(3000); // Space between letters
  }

  delay(1000); // Space between message repetitions
}

void blinking_func(const char* Morsecode) {
  for (int i = 0; Morsecode[i]; i++) {
    if (Morsecode[i] == '.') {
      digitalWrite(ledPin, HIGH);
      delay(500);
      digitalWrite(ledPin, LOW);
      delay(400);
    } 
    else if (Morsecode[i] == '-') {
      digitalWrite(ledPin, HIGH);
      delay(1800);
      digitalWrite(ledPin, LOW);
      delay(400);
    }
  }
}
