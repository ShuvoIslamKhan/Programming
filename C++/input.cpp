#include <iostream>
using namespace std;
int main() {
  int age;
  double cgpa;
  string department;
  cout << "Enter your age: ";
  cin >> age;
  cout << "Enter your cgpa: ";
  cin >> cgpa;
  cout << "Enter your department: ";
  getline(cin, department);

  cout << "You are " << age << " years old." << '\n';
  cout << "Your cgpa is " << cgpa << '\n';
  cout << "You're a student of " << department << '\n';
  return 0;
}
