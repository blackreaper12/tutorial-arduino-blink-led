#define LED_1 12
#define LED_2 11


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  // LED 1 dan 2 akan mati semua
  delay(1000);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  // LED 1 akan hidup dan 2 akan mati
  delay(1000);
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  // LED 1 dan 2 akan hidup semua
  delay(1000);
}
