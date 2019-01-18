#include <iostream>
using namespace std;

int main()
{
  int a,counter=1,n,temp=0;
  cin >> n;
  while(n!=0){
  int arr[1000000];
  int array[1000000];
  temp = 0;
  for (int i=1; i<=n; i++){
    cin >> arr[i];
    }

  for (int j=1; j<=n; j++){
    array[arr[j]] = j;
  }

  for (int l=1; l<=n; l++){
    if (arr[l]!=array[l]){
      temp = 1;
    }
  }

  if (temp == 1){
    cout << "not ambiguous" << endl;
  }
  else{
    cout << "ambiguous" << endl;
  }
  cin >> n;
}
return 0;
}
