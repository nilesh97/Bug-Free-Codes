#include <iostream>
using namespace std;

int main()
{
  int a;
  float b,s;
  cin >> a;
  cin >> b;
  if (a%5==0){
    if (a<=(b-0.50)){
      s = b-0.50-a;
      cout << s;
    }
    else{
      cout << b;
    }
  }

  else{
    cout << b;
  }

  return 0;
}
