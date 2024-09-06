#include <iostream>

using namespace std;

struct Student {
  char name[10];
  int id;
  float gpa;
};

int main () {
  Student sophia;
  cin >> sophia.name;
  sophia.id = 461932;
  sophia.gpa = 4.0;
  cout << sophia.name << " ID: " << sophia.id << " GPA: " << sophia.gpa << endl;

  return 0;
}
