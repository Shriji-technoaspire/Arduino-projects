#define ANODE  0
#define CATHODE 1

#define DISPLAY_TYPE  ANODE

#if DISPLAY_TYPE == CATHODE
  #define LOGIC_HIGH HIGH
  #define LOGIC_LOW LOW
#else
  #define LOGIC_HIGH LOW
  #define LOGIC_LOW HIGH
#endif



unsigned const int A = 2;
unsigned const int B = 3;
unsigned const int C = 4;
unsigned const int D = 5;
unsigned const int E = 6;
unsigned const int F = 7;
unsigned const int G = 8;
unsigned const int H = 9;


void setup(void)
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
}

//My Functions

void zero(void) {
  digitalWrite(A, LOGIC_HIGH);
  digitalWrite(B, LOGIC_HIGH);
  digitalWrite(C, LOGIC_HIGH);
  digitalWrite(D, LOGIC_HIGH);
  digitalWrite(E, LOGIC_HIGH);
  digitalWrite(F, LOGIC_HIGH);
  digitalWrite(G, LOGIC_LOW);

}

void one(void) {
  digitalWrite(A, LOGIC_LOW);
  digitalWrite(B, LOGIC_HIGH);
  digitalWrite(C, LOGIC_HIGH);
  digitalWrite(D, LOGIC_LOW);
  digitalWrite(E, LOGIC_LOW);
  digitalWrite(F, LOGIC_LOW);
  digitalWrite(G, LOGIC_LOW);
  digitalWrite(H, LOW);
}

void two(void) {
  digitalWrite(A, LOGIC_HIGH);
  digitalWrite(B, LOGIC_HIGH);
  digitalWrite(C, LOGIC_LOW);
  digitalWrite(D, LOGIC_HIGH);
  digitalWrite(E, LOGIC_HIGH);
  digitalWrite(F, LOGIC_LOW);
  digitalWrite(G, LOGIC_HIGH);
  digitalWrite(H, LOW);
}

void three(void) {
  digitalWrite(A, LOGIC_HIGH);
  digitalWrite(B, LOGIC_HIGH);
  digitalWrite(C, LOGIC_HIGH);
  digitalWrite(D, LOGIC_HIGH);
  digitalWrite(E, LOGIC_LOW);
  digitalWrite(F, LOGIC_LOW);
  digitalWrite(G, LOGIC_HIGH);
  digitalWrite(H, HIGH);
}

void four(void) {
  digitalWrite(A, LOGIC_LOW);
  digitalWrite(B, LOGIC_HIGH);
  digitalWrite(C, LOGIC_HIGH);
  digitalWrite(D, LOGIC_LOW);
  digitalWrite(E, LOGIC_LOW);
  digitalWrite(F, LOGIC_HIGH);
  digitalWrite(G, LOGIC_HIGH);
  digitalWrite(H, HIGH);
}

void five(void) {
  digitalWrite(A, LOGIC_HIGH);
  digitalWrite(B, LOGIC_LOW);
  digitalWrite(C, LOGIC_HIGH);
  digitalWrite(D, LOGIC_HIGH);
  digitalWrite(E, LOGIC_LOW);
  digitalWrite(F, LOGIC_HIGH);
  digitalWrite(G, LOGIC_HIGH);
  digitalWrite(H, HIGH);
}

void six(void) {
  digitalWrite(A, LOGIC_HIGH);
  digitalWrite(B, LOGIC_LOW);
  digitalWrite(C, LOGIC_HIGH);
  digitalWrite(D, LOGIC_HIGH);
  digitalWrite(E, LOGIC_HIGH);
  digitalWrite(F, LOGIC_HIGH);
  digitalWrite(G, LOGIC_HIGH);
  digitalWrite(H, HIGH);
}

void seven(void) {
  digitalWrite(A, LOGIC_HIGH);
  digitalWrite(B, LOGIC_HIGH);
  digitalWrite(C, LOGIC_HIGH);
  digitalWrite(D, LOGIC_LOW);
  digitalWrite(E, LOGIC_LOW);
  digitalWrite(F, LOGIC_LOW);
  digitalWrite(G, LOGIC_LOW);
  digitalWrite(H, HIGH);
}

void eight(void) {
  digitalWrite(A, LOGIC_HIGH);
  digitalWrite(B, LOGIC_HIGH);
  digitalWrite(C, LOGIC_HIGH);
  digitalWrite(D, LOGIC_HIGH);
  digitalWrite(E, LOGIC_HIGH);
  digitalWrite(F, LOGIC_HIGH);
  digitalWrite(G, LOGIC_HIGH);
  digitalWrite(H, HIGH);
}

void nine(void) {
  digitalWrite(A, LOGIC_HIGH);
  digitalWrite(B, LOGIC_HIGH);
  digitalWrite(C, LOGIC_HIGH);
  digitalWrite(D, LOGIC_LOW);
  digitalWrite(E, LOGIC_LOW);
  digitalWrite(F, LOGIC_HIGH);
  digitalWrite(G, LOGIC_HIGH);
  digitalWrite(H, HIGH);
}

// Start
void loop(void)
{
  zero();
  delay(1000);
  
  one();
  delay(1000);
  
  two();
  delay(1000);
  
  three();
  delay(1000);
  
  four();
  delay(1000);
  
  five();
  delay(1000);
  
  six();
  delay(1000);
  
  seven();
  delay(1000);
  
  eight();
  delay(1000);
  
  nine();
  delay(1000);
}
