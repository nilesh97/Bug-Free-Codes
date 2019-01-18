#include <iostream>
using namespace std;

int main()
{
  int t,n,temp=0,p=0,r=0;
  cin >> t;
  while (t--){
    cin >> n;
    temp = n;
    r = 0;
    while (n!=0){
      p = n%10;
      r = r*10 + p;
      n = n/10;
    }
    if (temp==r){
      cout << "wins" << endl;
    }
    else{
      cout << "losses" << endl;
    }
  }
return 0;
}
