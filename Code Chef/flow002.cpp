#include <iostream>
using namespace std;

int main()
{
  int t,i,a,b,s=0;
  cin >> t;
  for (i=1; i<=t; i++){
    cin >> a >> b;
    s = a%b;
    cout << s << endl;
  }

return 0;
}
