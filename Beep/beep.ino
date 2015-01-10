// "Beep"  - Blink 2.0
// Make an arduino beep in morse code.

int led = 13; // Trinket Pro onboard LED
void setup() {
  pinMode(led, OUTPUT);
}

void loop() { 
  dash(); dot(); dot(); dot();       // B
  space();                           
  dot();                             // E 
  space();  
  dot();                             // E
  space(); 
  dot(); dash(); dash(); dot();      // P
  space(); space();
}

// Noise functions
void dot()   { beep(100); } 
void dash()  { beep(300); }
void space() { digitalWrite(led,LOW); delay(300); }

// That beep.
void beep(int l) {
  digitalWrite(led, HIGH); 
  delay(l);
  space();
}