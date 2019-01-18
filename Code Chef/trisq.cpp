#include <iostream>
using namespace std;

int main()
{
  int t,base,square;
  cin >> t;
  while (t--){
    cin >> base;
    base = base - 2;
    base = base/2;
    square = base * (base + 1)/2;
    cout << square << endl;
  }
return 0;
}
