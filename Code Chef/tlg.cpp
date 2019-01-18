#include <iostream>
using namespace std;

int main(){
  int n,a,b;
  int points = 0;
  int winner = 0;
  int temp = 0;
  int temp2 =0;
  int score1 =0;
  int score2 = 0;
  cin >> n;
  for (int i=1; i<=n; i++){
    cin >> a >> b;
    score1 = score1 + a;
    score2 = score2 + b;
    if (score1>score2){
      winner = 1;
      points = score1-score2;
    }
    else{
      winner = 2;
      points = score2-score1;
    }

    if (points > temp){
      temp = points;
      temp2 = winner;
    }
  }
cout << temp2 << " " << temp;
return 0;
}
