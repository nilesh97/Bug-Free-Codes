#include <iostream>
using namespace std;

int main()
{
  int n,result,root,t,j;
  cin >> t;
  for (int i=1; i<=t; i++){
    cin >> n;
    j = 0;
    result = 0;
    if (n==1){
      root = 1;
    }
    else{
    while(result <= n){
      result = j*j;
      j++;
    }
    root = j-2;
  }
    cout << root << endl;
  }
}
