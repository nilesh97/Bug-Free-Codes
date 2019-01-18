#include <iostream>
using namespace std;

int main()
{
  int t;
  char str;
  cin >> t;
  while (t--){
    cin >> str;
    if (str=='B' || str=='b')
      cout << "BattleShip" << endl;
    if (str=='C' || str=='c')
      cout << "Cruiser" << endl;
    if (str=='D' || str=='d')
      cout << "Destroyer" << endl;
    if (str=='F' || str=='f')
      cout << "Frigate" << endl;
  }
return 0;
}
