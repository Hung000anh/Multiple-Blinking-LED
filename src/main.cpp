#include <Arduino.h>

#define NUM_LEDS 8  // Số lượng đèn LED

int ledPins[NUM_LEDS] = {0, 1, 2, 3, 4, 5, 6, 7};  // Chân kết nối của LED

void setup() {
  for (int i = 0; i < NUM_LEDS; i++) {
    pinMode(ledPins[i], OUTPUT);  // Thiết lập tất cả chân LED là OUTPUT
  }
}

void loop() {
  // Giai đoạn 1: Bật từng LED từ trái sang phải
  for (int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(200);
  }
  delay(500); // Giữ trạng thái sáng trong 0.5s

  // Giai đoạn 2: Tắt từng LED từ phải sang trái
  for (int i = NUM_LEDS - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], LOW);
    delay(200);
  }
  delay(500); // Giữ trạng thái tắt trong 0.5s
}
