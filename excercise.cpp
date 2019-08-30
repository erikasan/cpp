#include <iostream>

int main(){
  int values = 0, sum = 0;
  std::cin >> values;
  while (std::cin){
    sum += values;
  }
  std::cout << sum << std::endl;
  return 0;
}
