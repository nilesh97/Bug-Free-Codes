#include <iostream>
using namespace std;

int main()
{
  int n,even=0,odd=0;
  cin >> n;
  int arr[n];
  for (int i=0; i<n; i++){
    cin >> arr[i];
  }
  for (int i=0; i<n; i++){
    if (arr[i]%2==0){
      even++;
    }
    else{
      odd++;
    }
  }
  if (even>odd){
    cout << "READY FOR BATTLE" << endl;
  }
  else{
    cout << "NOT READY" << endl;
  }
return 0;
}
