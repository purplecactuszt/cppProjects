#include <iostream>
#include <string>
using namespace std;

int main(){
  int i;
  int numCorr;
  string strCorr;
  int uNumCorr;
  string uStrCorr;
  int score = 0;
  for(i = 1; i<= 100; i++){
    if(i % 15 == 0){
      strCorr = "FizzBuzz";
      cin >> uStrCorr;
      if(uStrCorr == strCorr){
        score++;
        continue;
      }else{
        cout << "Your score was: " << score;
        break;
      }
    }else if(i % 5 == 0){
      strCorr = "Buzz";
      cin >> uStrCorr;
      if(uStrCorr == strCorr){
        score++;
        continue;
      }else{
        cout << "Your score was: " << score;
        break;
      }
    }else if(i% 3 == 0){
      strCorr = "Fizz";
      cin >> uStrCorr;
      if(uStrCorr == strCorr){
        score++;
        continue;
      }else{
        cout << "Your score was: " << score;
        break;
      }
    }else{
      numCorr = i;
      cin >> uNumCorr;
      if(uNumCorr == numCorr){
        score++;
        continue;
      }else{
        cout << "Your score was: " << score;
        break;
      }
    }
    if(i >= 100){
    cout << "Congrats you beat the game!!!!\n";
  }
 }
}
