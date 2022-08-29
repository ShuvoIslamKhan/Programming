#include <iostream>
using namespace std;
int main() {
  string phrase = "Applied Mathematics";
  cout << phrase.find("Mathematics", 0);
  cout << phrase.substr(8, 4);
  return 0;
}
