// Stained glass project with Dorothea
// v. 1.0
// May 14, 2020


int ledPin = 3;    // LED connected to digital pin 3 (PWM)
int cdsPin = 1;   // CDS sensor on A1
int lightLevel;

void setup() {
  // put your setup code here, to run once:
  pinMode(cdsPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {

  lightLevel = analogRead(cdsPin);  // read light sensor
  int x = map(lightLevel, 0, 1023, 0, 255);
    analogWrite(ledPin, x);
    
}
