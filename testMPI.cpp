#include <iostream>
#include <omp.h>
#define CHUNKSIZE 100
#define N 10

using namespace std;

int main (int argc, char *argv[])
{
int i, chunk;
float a[N], b[N], c[N];
for (i=0; i < N; i++) a[i] = b[i] = i * 1.0;
chunk = CHUNKSIZE;
#pragma omp parallel shared(a,b,c,chunk) private(i)
{
#pragma omp for schedule(dynamic,chunk)
for (i=0; i < N; i++) c[i] = a[i] + b[i];
} /* end of parallel region */

for (int j = 0; j != N; ++j) {
  cout << c[i] << endl;
}

}
