#include <iostream>
#include <string>
using namespace std;
int main(){
      int maxNum;
      int ranNum;
      int guess = 0;
      bool cont = true;
      char conts;
      int att = 0;
      while (cont == true){
          cout << "Write the maximum number for guessing: ";
          cin >> maxNum;
          ranNum = rand() % maxNum + 1;
          while(guess != ranNum){
            cout << "Type a guess: ";
            cin >> guess;
            att++;

            if (guess > ranNum){
              cout << "To high guess lower!" << endl;
            }else if (guess < ranNum){
              cout << "To low guess higher!" << endl;
            }
          }
          cout << "Well done! U guessed the number!" << endl;
          cout << "You guessed the number in: " << att << " attempts!" << endl;
          cout << "Wanna play again? (y/n): ";
          cin >> conts;
          if (conts == 'y'){
            cont = true;
            att = 0;
          }else{
            cont = false;
          }
         }
        }
