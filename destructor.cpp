#include <bits/stdc++.h>
using namespace std;
/*-----Destructor info-------
A destructor in C++ is a special member function that is called automatically when an object is destroyed. This can happen when the object goes out of scope, or when it is explicitly deleted.

Destructors are used to clean up any resources that were allocated by the object constructor. For example, if an object allocates memory, the destructor should free that memory.

Destructors are also used to release any other resources that the object needs, such as open files or database connections.

*/

//Create a Student calss
class Student {
public:
  string first_name;
  string last_name;
  long long roll;

  ~Student() { // destructor
    cout << "Destructor is called";
  }
};


int main() {

  Student info;
  info.first_name = "Lutfor ";
  info.last_name = "Rahman ";
  info.roll = 141168;
  cout << "Name: "<< info.first_name << info.last_name << endl;
  cout << "Roll: " << info.roll << endl;
  

  return 0;
}
