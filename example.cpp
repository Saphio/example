#include <iostream>

using namespace std;

int main ()
{
  int input = 0;
  cin >> input;
 cout << "Before loop: " << input << endl;
  
 while (input == 5) {
   cin >> input;
   cout << input << endl;
 }

 
 
 cout << "After loop: " << input << endl;

 return 0;

}
