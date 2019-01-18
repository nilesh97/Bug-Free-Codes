#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  if (a==0)
    return b;
  else
    return gcd(b%a, a);
}

int main()
{
  int t,n;
  int arr[100];
  cin >> t;
  for ( int i=0; i<t; i++){
    cin >> n;
    for ( int j=0; j<n; j++){
      cin >> arr[j];
    }
    int result = arr[0];
    for ( int k=1; k<n; k++){
      result = gcd (result,arr[k]);
    }
    for ( int l=0; l<n; l++){
      arr[l] = arr[l]/result;
      cout << arr[l] << " ";
    }
    cout << endl;
  }
return 0;
}
