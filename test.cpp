#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
#include <array>
#include <cstdlib>
#include <cstdio>
using namespace std;


int func(int, int);

int main()
{

  int a = 1, b = 2;
  cout << func(a, b);
  return 0;
}

int func(int a, int b)
{
  return a + b;
}
