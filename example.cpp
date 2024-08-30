#include <iostream>

using namespace std;

int main ()
{
  int input = 0;
  cin >> input;

 if (input == 3)
   {
     cout << "You entered a 3." << endl;
     input++;
   }
 else if (input == 4) {
   cout << "You entered a 4." << endl;
 }
 else {
   cout << "You entered something else." << endl;
 }
 
  cout << input << endl;
  return 0;
}
