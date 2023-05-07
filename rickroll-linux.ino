//This DigiSpark script opens up Rick Astley's - Never Gonna Give You Up and also a fake Windows update screen and then maximizes it using F11
#include "DigiKeyboard.h"
void setup() {
  //empty
}
void loop() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT| MOD_ALT_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("google-chrome https://youtu.be/dQw4w9WgXcQ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("f");
  for(;;){ /*empty*/ }
}
