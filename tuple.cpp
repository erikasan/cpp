#include <iostream>
#include <tuple>

using namespace std;

int main()
{
  double a = 0, b = 2, c = 3, d = 5;
  auto args = make_tuple (a, b, c ,d);
  cout << get<1>(args);
  return 0;
}
