#include <iostream>

using namespace std;

double g(double f());
double f(double x);

int main()
{
  return 0;
}

double g(double f())
{
  return 2*f;
}

double f(double x)
{
  return 2*x;
}
