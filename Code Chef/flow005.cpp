#include <iostream>
using namespace std;

int main()
{
  int n,t,c1,c2,c3,c4,c5,c6;
  cin >> t;
  for (int i=0; i<t; i++){
    cin >> n;
    c1 = 0;c2 = 0;c3 = 0;c4 = 0;c5 = 0;c6 = 0;
    if(n>=100){
      c1=n/100;
      n = n - c1*100;
    }
    if(n>=50){
      c2=n/50;
      n = n - c2*50;
    }
    if(n>=10){
      c3=n/10;
      n = n - c3*10;
    }
    if(n>=5){
      c4=n/5;
      n = n - c4*5;
    }
    if(n>=2){
      c5=n/2;
      n = n - c5*2;
    }
    if(n>=1){
      c6=n/1;
      n = n - c6*1;
    }
    cout << c1 + c2 + c3 + c4 + c5 + c6 << endl;
  }
return 0;
}
