#include <iostream>

using namespace std;

float pow (float a, int x);

int main () {
  float num = 3.0;
  int power = 2;
  float result = pow(num, power);

  cout << "result: " << result << endl;
  
  return 0;
}

float pow (float a, int x) {
  float answer = a;
  for (int i = 1; i < x; i++) {
    answer *= a;
  }

  return answer;
}
