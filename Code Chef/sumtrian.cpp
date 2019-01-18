#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int arr[100][100];
  int t,n,a,i,j,k;
  int sum = 0;
  int temp = 0;
  cin >> t;
  for (int i=1; i<=t; i++){
    cin >> n;
    for (int j=0; j<n; j++){
      for (int k=0; k<j+1; k++){
        cin >> a;
        arr[j][k] = a;
      }
    }
    for ( j=n-1; j>0; j--){
      for ( k=0; k<j; k++){
        if((arr[j][k]+arr[j-1][k])>(arr[j][k+1]+arr[j-1][k])){
          arr[j-1][k] = arr[j][k]+arr[j-1][k];
        }
        else{
          arr[j-1][k] = arr[j][k+1]+arr[j-1][k];
        }
      }
    }

cout << arr[0][0] << endl;
  }
return 0;
}
