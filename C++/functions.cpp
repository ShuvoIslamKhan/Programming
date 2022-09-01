#include <iostream>
using namespace std;

void sayHi(string name, int age){
  cout << "Hello " << name << ", You're " << age << endl;
}

int main() {
  sayHi("Shuvo", 22);
  sayHi("Tisha", 22);
  return 0;
}
