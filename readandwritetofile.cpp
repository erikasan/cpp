#include <iostream>
#include <fstream>

using namespace std;


int main(int argc, char* argv[])
{
  ifstream infile;
  ofstream outfile;

  char *infilename;
  char *outfilename;
  infilename = argv[1];
  outfilename = argv[2];

  outfile.open(outfilename);
  outfile.close();
  return 0;
}
