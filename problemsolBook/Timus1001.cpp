#include <iostream>
#include <cmath>
#include <vector>
#include<iomanip>
using namespace std;
int main() {
  vector<double>V;
  double a;

  while(cin >> a &&a!=EOF){
    V.push_back(a);
  }
  for(int i = V.size() -1; i>=0;i--){
    cout<<setprecision(4)<<fixed<<sqrt(V[i])<<endl;
  }
  return 0;
}
