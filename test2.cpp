#include <iostream>
#include <cmath>

using namespace std;

double func(double x);

int main()
{

  return 0;
}

double func(double x)
{
  double value;
  value = 4/(1.+x*x);
  return value;
} // end of function to evaluate
