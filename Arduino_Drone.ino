#define button 7
#define motor1control 3
#define motor1a 2
#define motor1b 4
#define motor2control 5
#define motor2a 12
#define motor2b 13
#define motor3control 6
#define motor3a A0
#define motor3b A1
#define motor4control 9
#define motor4a A2
#define motor4b A3

int button_state;
int vel = 255;

void configMotors() {
  pinMode(button, INPUT);
  pinMode(motor1control, OUTPUT);
  pinMode(motor1a, OUTPUT);
  pinMode(motor1b, OUTPUT);
  pinMode(motor2control, OUTPUT);
  pinMode(motor2a, OUTPUT);
  pinMode(motor2b, OUTPUT);
  pinMode(motor3control, OUTPUT);
  pinMode(motor3a, OUTPUT);
  pinMode(motor3b, OUTPUT);
  pinMode(motor4control, OUTPUT);
  pinMode(motor4a, OUTPUT);
  pinMode(motor4b, OUTPUT);
  analogWrite(motor1control, 0);
  digitalWrite(motor1a, LOW);
  digitalWrite(motor1b, LOW);
  analogWrite(motor2control, 0);
  digitalWrite(motor2a, LOW);
  digitalWrite(motor2b, LOW);
  analogWrite(motor3control, 0);
  digitalWrite(motor3a, LOW);
  digitalWrite(motor3b, LOW);
  analogWrite(motor4control, 0);
  digitalWrite(motor4a, LOW);
  digitalWrite(motor4b, LOW);
}

void setup() {
  configMotors();
}

void loop() {
  // TODO
  button_state = digitalRead(button);
  if (button_state == HIGH) {
    delay(2000);
    analogWrite(motor1control, vel);
    digitalWrite(motor1a, HIGH);
    digitalWrite(motor1b, LOW);
    analogWrite(motor2control, vel);
    digitalWrite(motor2a, HIGH);
    digitalWrite(motor2b, LOW);
    analogWrite(motor3control, vel);
    digitalWrite(motor3a, LOW);
    digitalWrite(motor3b, HIGH);
    analogWrite(motor4control, vel);
    digitalWrite(motor4a, LOW);
    digitalWrite(motor4b, HIGH);
    delay(5000);
    analogWrite(motor1control, vel);
    digitalWrite(motor1a, LOW);
    digitalWrite(motor1b, HIGH);
    analogWrite(motor2control, vel);
    digitalWrite(motor2a, HIGH);
    digitalWrite(motor2b, LOW);
    analogWrite(motor3control, vel);
    digitalWrite(motor3a, LOW);
    digitalWrite(motor3b, HIGH);
    analogWrite(motor4control, vel);
    digitalWrite(motor4a, HIGH);
    digitalWrite(motor4b, LOW);
    delay(10000);
  }
}
