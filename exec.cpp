byte path[60];
byte len;

// код с генерацией пути

void go_to_cross() {
  // your code
}

void turn_right() {
  // your code
}

void turn_left() {
  // your code
}

void exec() {
  for (byte i = 0; i < len; ++i) {
    if (path[i] == 0) {
      go_to_cross();
    } else if (path[i] == 1) {
      turn_right();
    } else if (path[i] == 2) {
      turn_left();
    } else {
      Serial.println("unknown code error");
    }
  }
}
