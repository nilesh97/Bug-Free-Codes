#include <iostream>
using namespace std;

int main(){
  int t,i,p=0,n;
  cin >> t;
  for (i=1; i<=t; i++){
    cin >> n;
    p=(n/2)+1;
    cout << p << endl;
  }
return 0;
}
