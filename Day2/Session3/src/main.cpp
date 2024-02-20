// Development Plan: Commit the code each time a step is completed.
// [ ] Set all the pins that are connected to the 7-segment display to LOW (should turn everything on). 
// [ ] Create the function show0(), which makes the display show the number 0.
// [ ] Create the function show1(), which makes the display show the number 1.
// [ ] Create the function show2(), which makes the display show the number 2.
// [ ] Create the function show3().
// [ ] Create the function show4().
// [ ] Create the function show5()
// [ ] Create the function show6().
// [ ] Create the function show7().
// [ ] Create the function show8().
// [ ] Create the function show9().
// [ ] Create the function showNum(num), which shows the requested number 0-9.
// [ ] Create the function turnOff(), which turns off all segments of the display.
// [ ] Make a countdown: have the numbers count down to zero.
// [ ] Restart the countdown every time a button is pressed.


#include <Arduino.h>

void setup() {
  int segmentPins[] = {2,3,6,7,8,9,10,11,12}; // define pins to set as outputs
  int segmentPins_3[] = {6,7,8,9,12}; // define pins to set as outputs
  
  for (int i = 0; i < 9; i++){ 
    pinMode(segmentPins[i], OUTPUT);
  }

  digitalWrite(2,HIGH); // set pin 2 as HIGH to turn on 1st digit

  //set all pins to high to clear display
  for (int i = 2; i < 10; i++){ 
    digitalWrite(segmentPins[i], HIGH);
  }

 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 digitalWrite(9,LOW);
 digitalWrite(12,LOW);



}

void loop ()
{


}
