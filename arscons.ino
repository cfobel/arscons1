// A mockup sketch to demonstrate building using arscons.

#define PIN_LED 13

void setup(void)
{
  pinMode(PIN_LED, OUTPUT);
}

void loop(void)
{
  digitalWrite(PIN_LED, HIGH);
  delay(1000);
  digitalWrite(PIN_LED, LOW);
  delay(1000);
}

/* vim: set sw=2 et: */
