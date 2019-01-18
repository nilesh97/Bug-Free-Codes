#include <iostream>
using namespace std;

int main()
{
  int t,a,b,min=0,max=0;
  cin >> t;
  for (int i=1; i<=t; i++){
    cin >> a >> b;
    if(a>=b){
      min = a;
      max = a+b;
    }
    else{
      min = b;
      max = a+b;
    }
    cout << min << " " << max << endl;
  }

return 0;
}
