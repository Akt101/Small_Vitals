#include "Main.h"

uint16_t finalBPM = 0;
void setup() {
  Serial.begin(9600);
  //Wire.setModule(1);
  Wire.begin();

//  pinMode(LONEG, INPUT); // Setup for leads off detection LO +
//  pinMode(LOPOS, INPUT); // Setup for leads off detection LO -
//  pinMode(24, INPUT);
//
  //pinMode(29,INPUT);
//while(1){
//  
//  }
}

void loop() {
  finalBPM = BPMACTION();
  Serial.print("BPM =");
  Serial.println(finalBPM);

  Serial.print("BodyTemp = ");
  Serial.println(LMTACTION());

  Serial.print("RoomTemp = ");
  Serial.println(TEMPACTION());

  Serial.print("RoomHum = ");
  Serial.println(HUMACTION());
}
