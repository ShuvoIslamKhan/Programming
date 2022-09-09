#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main() {
  vector<long long>V;
  long long a;
  while((cin >> a) !=EOF){
    V.pushback(a);
  }
  for(int i = V.size() -1; i>=0;i--){
    cout << sqrt(V[i]) << endl;
  }
  return 0;
}
