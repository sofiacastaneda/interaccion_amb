/*

 Fade



This example shows how to fade an LED on pin 9 using the analogWrite()

 function.



The analogWrite() function uses PWM, so if you want to change the pin you're

 using, be sure to use another PWM capable pin. On most Arduino, the PWM pins

 are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.



This example code is in the public domain.



http://www.arduino.cc/en/Tutorial/Fade

 */



int led = 10; // the PWM pin the LED is attached to
int brightness = 20; // how bright the LED is
int fadeAmount = 50; // how many points to fade the LED by



// the setup routine runs once when you press reset:
 void setup() {
 // declare pin 9 to be an output:
 pinMode(led, OUTPUT);
 Serial.begin(9600);
 }



 void loop() {

 // set the brightness of pin 9:
 analogWrite(led, brightness);

// change the brightness for next time through the loop:
 brightness = brightness + fadeAmount;
 Serial.println(brightness);

// wait for 30 milliseconds to see the dimming effect
 delay(1000);

 }
