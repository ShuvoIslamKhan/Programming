#include <iostream>
using namespace std;

/*int main() {
  int age = 19;
  double gpa = 2.7;
  string name = "Mike";
  cout << "Age: " << &age << endl;
  cout << "Gpa: " << &gpa << endl;
  cout << "Name: " << &name << endl;


  return 0;
}
*/
int main() {
  int age = 19;
  int *pAge = &age;
  double gpa = 2.7;
  double *pGpa = &gpa;
  string name = "Mike";
  string *pName = &name;

  cout << pAge << '\n';

  return 0;
}
/*
int main() {
  int age = 19;
  int *pAge = &age;
  double gpa = 2.7;
  double *pGpa = &gpa;
  string name = "Mike";
  string *pName = & name;

  cout << *pAge << '\n'; //dereferencing

  return 0;
}
*/
