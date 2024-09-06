#include <iostream>

using namespace std;

float pow (float a, int x);
float powByReference (float & a, int x);
void swap (int & a, int & b);

int main () {
  float num = 3.0;
  int power = 2;
  float result = pow(num, power);

  cout << "result: " << result << endl;

  result = powByReference(num, power);
  cout << "number by reference (modified): " << num << endl;
  cout << "result by reference: " << result << endl;

  int george = 0, fred = 2;
  swap(george, fred);
  cout << george << ", " << fred << endl;
  
  return 0;
}

float pow (float a, int x) { // passing by value
  float answer = a;
  for (int i = 1; i < x; i++) {
    answer *= a;
  }

  return answer;
}

float powByReference (float & a, int x) { // passing by reference
  float answer = a;
  for (int i = 1; i < x; i++) {
    answer *= a;
  }

  a = 27.0;

  return answer;
}

void swap (int & a, int & b) {
  int temp = a;
  a = b;
  b = temp;
}
