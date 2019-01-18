#include <iostream>
using namespace std;

int main()
{
  int t,n,p;
  cin >> t;
  for (int i=1; i<=t; i++){
    cin >> n;
    int counter = 0;
    while(n!=0){
      p=n%10;
      n=n/10;
      if(p==4){
        counter = counter + 1;
        }
    }
    cout << counter << endl;
  }
return 0;
}
