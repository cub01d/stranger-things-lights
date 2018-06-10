#define PINBASE 2
#define NUMPINS 10
#define DELAY 300

void setup() {
  // set LED pins as output
  for(int i=PINBASE; i<PINBASE + NUMPINS; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  // set up serial monitor
  Serial.begin(9600);
  Serial.println("Begin program! :)");
}

void loop() {
  char msg[32];
  // wait for input via serial monitor
  Serial.println("Waiting for user input");
  
  // start message from beginning
  int msgindex = 0;
  // wait until message is completely processed before moving on
  int processed = 0;
  while(1){
    if(Serial.available() > 0) {
      char digit = Serial.read();
      if (digit == '\n') {
        msg[msgindex] = '\0';
        processed = 1;
        break;
      }
      // only accept digits and spaces
      if (digit >= '0' && digit <= '9' || digit == ' ') {
        msg[msgindex++] = digit;
        Serial.println(digit);   // echo back input to user for now
      } 
    }
    if (processed == 1)
      break;
  }
  // received user input
  Serial.println("Received input");

  // display input
  display(msg);
}


void display(char* msg) {
  int msgpos = 0;
  char digit;
  while( (digit = msg[msgpos++]) != '\0') {
    // blink the corresponding LED
    if (digit == ' ') {   // space
      delay(2*DELAY);
      continue;
    }
    // digits
    int pin = digit - '0' + PINBASE;
    digitalWrite(pin, HIGH);
    delay(DELAY);
    digitalWrite(pin, LOW);
    delay(DELAY);
  }
}
