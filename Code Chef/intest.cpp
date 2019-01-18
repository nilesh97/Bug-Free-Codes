#include <iostream>
using namespace std;

int main()
{
  int i,n,k,x,counter=0;
  cin >> n;
  cin >> k;
  for ( i = 0 ; i < n ; i++) {
    cin >> x;
    if ( x % k == 0){
      counter = counter + 1;
    }
  }

cout << counter;
return 0;
}
