#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int t,p,o=0,c=0;
  cin >> t;
  for (int i=1; i<=t; i++){
    cin >> p;
    o = 0;
    c = 0;
    if (p>2048){
      o=p/2048;
      p=p-(o*2048);
    }
      for (int j=12; j>=1; j--){
        if(pow(2,j-1)<=p){
          p=p-pow(2,j-1);
          c++;
        }
      }
    cout << c+o << endl;
  }
return 0;
}
