#include <iostream>
using namespace std;

int main()
{
  int t,n,first=0,last,sum=0,r=0,p;
  cin >> t;
  for (int i=1; i<=t; i++){
    cin >> n;
    last = n%10;
    r=0;
    while (n!=0){
      p=n%10;
      r=r*10+p;
      n=n/10;
    }
    first = r%10;
    sum = first + last;
    cout << sum << endl;
  }

return 0;
}
