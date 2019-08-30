#include <iostream>

using namespace std;

int factorial(int n){
  if (n == 0){
    return 1;
  }

  else{
    int product = 1;
    for (int i = n; i != 0; --i){
      product *= i;
    }
    return product;
  }
}


int main(){
  int n;
  while (cin >> n){
    auto nFactorial = factorial(n);
    cout << nFactorial << ' ';
  }
  cout << endl;
  return 0;
}
