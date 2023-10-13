#include <GParser.h>    //https://github.com/GyverLibs/GParser
#include <parseUtils.h>
#include <unicode.h>
#include <url.h>

char strser[20];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //Serial.setTimeout(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    int am = Serial.readBytesUntil('\n', strser, 20);
    strser[am] = NULL;
    /*
    GParser data(strser, ',');
    am = data.split();
    Serial.println(data[0]);
    */
    Serial.println(strser);
    }
}
