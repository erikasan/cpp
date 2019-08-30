#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> ivec{1, 2, 3, 4, 5};
  for (auto b = ivec.begin(); b != ivec.end(); ++b){
    cout << *b << endl; // Bruk *-operatoren for å hente ut elementer
  }
  for (auto b = ivec.begin(); b != ivec.end(); ++b){
    *b = 0;
  }
  for (auto b = ivec.begin(); b != ivec.end(); ++b){
    cout << *b << endl;
  }
  return 0;
}
