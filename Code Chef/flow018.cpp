#include <iostream>
using namespace std;

int main()
{
  int t,n;
  cin >> t;
  for (int i=0; i<t; i++){
    cin >> n;
    long long int fact = 1;
    for (int j=1; j<=n; j++){
      fact = fact * j;
    }
    cout << fact << endl;
  }
return 0;
}
