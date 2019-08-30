#include <iostream>
#include <string>

using namespace std;

int main(){
  string inputString, concatString;
  while (getline(cin, inputString)){
    concatString += (inputString + ' ');
  }
  cout << concatString << endl;
}
