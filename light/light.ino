#include <Adafruit_NeoPixel.h>

#define LED_COUNT 4
Adafruit_NeoPixel matrix = Adafruit_NeoPixel(LED_COUNT, MATRIX_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < matrix.numPixels(); i++) {
    matrix.setPixelColor(i, 255, 255, 255);
    matrix.show();  
  }

  // for (int i = 0; i < LED_NUM; i++) {
  //   leds[i].setHue(counter + i * 255 / LED_NUM);
  // }
  // counter++;        // counter меняется от 0 до 255 (тип данных byte)
  // FastLED.show();
}
