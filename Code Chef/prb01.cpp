#include <iostream>
using namespace std;

int main()
{
  int n,t,flag=0;
  cin >> t;
  while (t--){
    cin >> n;
    flag = 0;
    for (int i=2; i<n; i++){
      if (n%i==0){
        flag = 1;
      }
    }
    if (flag==1){
      cout << "no" << endl;
    }
    else{
      cout << "yes" << endl;
    }
  }
return 0;
}
