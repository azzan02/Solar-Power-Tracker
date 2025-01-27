#include <Servo.h>
#define LDR1 A0
#define LDR2 A1
#define error_threshold 10
int Spoint1 = 90;
int Spoint2 = 90;
double Kp = 43.5523; // Proportional gain
double Ki = 3766.4748; // Integral gain
double Kd = 0.10286; // Derivative gain
double prevError = 0;
double integral = 0;
Servo servo1;
Servo servo2;
void setup() {
 servo1.attach(11);
 servo2.attach(12);
 servo1.write(Spoint1);
 servo2.write(Spoint2);
 delay(1000);
}
void loop() {
 int ldr1 = analogRead(LDR1);
 int ldr2 = analogRead(LDR2);

 int value1 = abs(ldr1 - ldr2);
 int value2 = abs(ldr2 - ldr1);
 int error = value1 - value2;

 integral = integral + error;
 double derivative = error - prevError;

 double pidOutput = (Kp * error) + (Ki * integral) + (Kd *
derivative);

 Spoint1 = constrain(Spoint1 + pidOutput, 30, 150); // Constrain
the servo angle between 30 and 150
 Spoint2 = constrain(Spoint2 + pidOutput, 30, 150); // Constrain
the servo angle between 30 and 150
 //Check these values using a IF condition
 if ((value1 <= error) || (value2 <= error)) {
 } else {
 if (ldr1 > ldr2) {
 Spoint1 = --Spoint1;
 }
 if (ldr1 < ldr2) {
 Spoint1 = ++Spoint1;
 }
 }
 //Check these values using a IF condition
 if ((value1 <= error) || (value2 <= error)) {
 } else {
 if (ldr1 > ldr2) {
 Spoint2 = ++Spoint2;
 }
 if (ldr1 < ldr2) {
 Spoint2 = --Spoint2;
 }
 }
 servo1.write(Spoint1);
 servo2.write(Spoint2);

 delay(20);
 prevError = error;
}
