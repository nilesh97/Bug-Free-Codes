#include <iostream>
using namespace std;

int main()
{
  int t,p,r,n;
  cin >> t;
  for (int i=1; i<=t; i++){
    cin >> n;
    int p = 0;
    int r = 0;
    while (n!=0){
      p=n%10;
      r=r*10+p;
      n=n/10;
    }
    cout << r << endl;
  }
}
