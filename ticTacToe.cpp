#include <iostream>
#include <string>
#include<windows.h>
using namespace std;
char sq1 = '1';
char sq2 = '2';
char sq3 = '3';
char sq4 = '4';
char sq5 = '5';
char sq6 = '6';
char sq7 = '7';
char sq8 = '8';
char sq9 = '9';
int whichPlayer = 1;
char playerMark;
bool winner = false;
int moves = 0;


void drawBoard(){
cout <<' ' << sq1 << " | " << sq2 << " | " << sq3 << endl;
cout << "----------" << endl;
cout <<' ' << sq4 << " | " << sq5 << " | " << sq6 << endl;
cout << "----------" << endl;
cout <<' ' << sq7 << " | " << sq8 << " | " << sq9 << endl;
}


int main(){
  while(winner == false){
    system("cls");
  drawBoard();
  if(whichPlayer == 1){playerMark = 'X'; whichPlayer = 2;}
  else{playerMark = 'O'; whichPlayer = 1;}

  int playerMoveSpot;
  int ifError;

  cin >> playerMoveSpot;

  if(playerMoveSpot == 1 && sq1 == '1'){sq1 = playerMark; moves++;}
  else if(playerMoveSpot == 2 && sq2 == '2'){sq2 = playerMark; moves++;}
  else if(playerMoveSpot == 3 && sq3 == '3'){sq3 = playerMark; moves++;}
  else if(playerMoveSpot == 4 && sq4 == '4'){sq4 = playerMark; moves++;}
  else if(playerMoveSpot == 5 && sq5 == '5'){sq5 = playerMark; moves++;}
  else if(playerMoveSpot == 6 && sq6 == '6'){sq6 = playerMark; moves++;}
  else if(playerMoveSpot == 7 && sq7 == '7'){sq7 = playerMark; moves++;}
  else if(playerMoveSpot == 8 && sq8 == '8'){sq8 = playerMark; moves++;}
  else if(playerMoveSpot == 9 && sq9 == '9'){sq9 = playerMark; moves++;}
  else{
    if(whichPlayer == 1){
      whichPlayer = 2;
    }else{
      whichPlayer = 1;
    }
    cout << "Invalid move!\n";
    playerMoveSpot = (rand() % 9) + 1;
    Sleep(3000);
  }//checks for cases matching with 1.
  if(sq1 == sq2 && sq2 == sq3 || sq1 == sq4 && sq4 == sq7){
    system("cls");
    drawBoard();
    cout << playerMark << " is the winner!" << endl;
    winner = true;
    //next if checks al cases with 5 matching starting with diagonals!
  }else if(sq5 == sq1 && sq1 == sq9 || sq5 == sq3 && sq3 == sq7 || sq5 == sq2 && sq2 == sq8 || sq5 == sq4 && sq4 == sq6){
    system("cls");
    drawBoard();
    cout << playerMark << " is the winner!" << endl;
    winner = true;
    // next if checks all cases with 9 matching.
  }else if(sq9 == sq6 && sq6 == sq3 || sq9 == sq8 && sq8 == sq7){
    system("cls");
    drawBoard();
    cout << playerMark << " is the winner!" << endl;
    winner = true;
  }
  if(moves == 9 && winner == false){
    system("cls");
    drawBoard();
    cout << "It's a tie!\n";
    winner = true;
  }





  if (winner == true){Sleep(3000);}
  system("cls");
 }

}
