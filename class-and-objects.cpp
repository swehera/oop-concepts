#include <bits/stdc++.h>
using namespace std;

// define a class 
class Fruit {
  string name;
  string color;
};

class Student {
public:
  string name;
  int roll;
};


int main() {

  Student info; // object
  info.name = "Lutfor Rahman";
  info.roll = 141168;
  cout << info.name << endl << info.roll << endl << endl;


  //new way to difine object
  Student * contact = new Student();
  contact->name = "Jalal Nuri Himel";
  contact->roll = 11169;
  cout << contact->name << endl << contact->roll;
  
  return 0;
}
