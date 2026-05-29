#define TRIG 9
#define ECHO 8
long duration;
float distance;
void setup() {
 pinMode(TRIG, OUTPUT);
 pinMode(ECHO, INPUT);
 Serial.begin(9600);
}
void loop() {
 digitalWrite(TRIG, LOW);
 delayMicroseconds(2);
 digitalWrite(TRIG, HIGH);
 delayMicroseconds(10);
 digitalWrite(TRIG, LOW);
duration = pulseIn(ECHO, HIGH);
distance = duration * 0.034 / 2;
 Serial.print("Distance: ");
 Serial.print(distance);
 Serial.println(" cm");
 delay(5000);
}