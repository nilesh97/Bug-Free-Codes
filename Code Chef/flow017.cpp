#include <iostream>
using namespace std;

int main()
{
  int a,b,c,t,secmax = 0;
  cin >> t;
  for ( int i=0; i<t; i++){
    cin >> a >> b >> c;
    if ( a>b && a<c){
      secmax = a;
    }
    if ( a>=c && a<=b){
      secmax = a;
    }
    if ( b>=c && b<=a){
      secmax = b;
    }
    if ( b>=a && b<=c){
      secmax = b;
    }
    if ( c>=a && c<=b){
      secmax = c;
    }
    if ( c>=b && c<=a){
      secmax = c;
    }
    cout << secmax << endl;
  }
return 0;
}
