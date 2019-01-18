#include <iostream>
using namespace std;

int main(){
  int t,i,p=0,n;
  cin >> t;
  for ( i = 1 ; i <= t ; i++){
    cin >> n;
    int sum = 0;
    while(n!=0){
      p = n%10;
      n = n/10;
      sum = sum + p;
    }
    cout << sum << endl;
  }
}
