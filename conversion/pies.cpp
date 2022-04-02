#include <iostream>
#define pies 3.28

using namespace std;


int main() {
  int i;
  float c;

  cout << "\\t" << "Metros" << "\\t" << "Pies";
  cout << endl;

  for (i=1; i<=40; i++) {
    c = i * pies;
    cout << "\\t" << i << "\\t" << c;
    cout << endl;
  }
  return 0;
}