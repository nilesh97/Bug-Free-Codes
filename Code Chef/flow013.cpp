#include <iostream>
using namespace std;

int main()
{
  int a,b,c,t,sum=0;
  cin >> t;
  for (int i=0; i<t; i++){
    cin >> a >> b >> c;
    sum = 0;
    sum = a+b+c;
    if (sum==180){
      cout << "YES" << endl;
    }
    else
      cout << "NO" << endl;
  }
return 0;
}
