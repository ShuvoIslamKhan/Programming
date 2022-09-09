#include <iostream>
using namespace std;
int power(int baseNum, int powNum) {
  int result = 1;
  for (int i = 0; i < powNum; i++) {
    result = result * baseNum;
  }
  return result;
}
int main() {
  int baseNum, powNum;
  cin >> baseNum >> powNum;
  cout << power(baseNum, powNum);
  return 0;
}
