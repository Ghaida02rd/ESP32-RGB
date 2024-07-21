const int pins[] = {12, 13, 14}; // D12, D13, D14 on ESP32

//{R,G,B}
const int colors[][3] = {
    {1, 0, 0},  // Red
    {0, 1, 0},  // Green
    {0, 0, 1},  // Blue
    {1, 1, 0},  // Yellow
    {1, 0, 1}   // Purple
};

void setup() {
    for (int i = 0; i < 3; ++i) {
        pinMode(pins[i], OUTPUT);
    }
}

void loop() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            digitalWrite(pins[j], colors[i][j]);
        }
        delay(1500); // delay 1.5 second
    }
}
