int a[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int d = 80, d2 = 80, d5=140, n, eff = 1, r = 0;
void setup() {
  // put your setup iode here, to run onie:
  for (int i = 0; i < 12; i++) {
    pinMode(a[i], OUTPUT);
  }
}

void loop() {
  // put your main iode here, to run repeatedly:
  if (eff == 1) {
    for (int i = 0; i < 12; i++) {
      digitalWrite(a[i], HIGH);
      delay(d);
    }
    for (int i = 0; i < 12; i++) {
      digitalWrite(a[i], LOW);
      delay(d);
    }
    for (int i = 11; i >= 0; i--) {
      digitalWrite(a[i], HIGH);
      delay(d);
    }
    for (int i = 11; i >= 0; i--) {
      digitalWrite(a[i], LOW);
      delay(d);
    }
    eff++;
  }

  if (eff == 2) {
    n = 12;
    for (int j = 0; j < 12; j++) {
      for (int i = 0; i < n; i++) {
        digitalWrite(a[i], HIGH);
        delay(d);
        digitalWrite(a[i], LOW);
      }
      for (int i = 0; i < n; i++) {
        digitalWrite(a[n - 1], HIGH);
      }
      n--;
    }
    eff++;
    r = 0;
  }

  if (eff == 3) {
    n = 12;
    for (int i = 0; i < 12; i++) {
      for (int j = 11; j >= r; j--) {
        digitalWrite(a[j], HIGH);
        delay(d);
        digitalWrite(a[j], LOW);
      }
      for (int i = 11; i >= r; i--) {
        digitalWrite(a[r], HIGH);
      }
      r++;
    }
    eff++;
  }

  if (eff == 4) {
    for (int i = 0; i < 3; i++) {
      r = 0;
      for (int i = 0; i < n; i++) {
        digitalWrite(a[i], HIGH);
        digitalWrite(a[i + 1], HIGH);
        delay(d2);
        digitalWrite(a[i], LOW);
        digitalWrite(a[i + 1], LOW);
      }
      for (int i = 11; i >= r; i--) {
        digitalWrite(a[i], HIGH);
        digitalWrite(a[i - 1], HIGH);
        delay(d2);
        digitalWrite(a[i], LOW);
        digitalWrite(a[i - 1], LOW);
      }
    }
    eff++;
  }

  if (eff == 5) {
    for (int i = 0; i < 3; i++) {
      r = 11;
      for (int j = 0; j < n; j++) {
        digitalWrite(a[j], HIGH);
        digitalWrite(a[r], HIGH);
        delay(d2);
        digitalWrite(a[j], LOW);
        digitalWrite(a[r], LOW);
        r--;
      }
    }
    eff++;
  }
  if(eff == 6){
    for(int i = 0; i<20; i++){
    for(int j=0; j<n; j+=2){
  digitalWrite(a[j], HIGH);
  }
  delay(d5);
  for(int j=0; j<n; j+=2){
  digitalWrite(a[j], LOW);
  }
  for(int j=1; j<n; j+=2){
  digitalWrite(a[j], HIGH);
  }
  delay(d5);
  for(int j=1; j<n; j+=2){
  digitalWrite(a[j], LOW);
  }
 }
 eff=1;
} 
}
