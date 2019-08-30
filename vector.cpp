#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
  vector<int> v1, v2;
  v1 = {1, 2, 3};
  v2 = {1, 2, 3};
  bool trueOrFalse = v1 == v2;
  cout << trueOrFalse << endl;
  return 0;
}
