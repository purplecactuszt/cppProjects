#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
#include <ctime>
using namespace std;


int main(){
  srand(time(0));
  string fSquare;
  string lSquare;
  string idk;
  vector<string> blackSquares = {"a1", "a3", "a5", "a7", "b2", "b4", "b6", "b8", "c1", "c3", "c5", "c7", "d2", "d4", "d6", "d8", "e1", "e3", "e5", "e7", "f2", "f4", "f6", "f8", "g1", "g3", "g5", "g7", "h2", "h4", "h6", "h8"};
  vector<string> whiteSquares = {"a2", "a4", "a6", "a8", "b1", "b3", "b6", "b7", "c2", "c4", "c6", "c8", "d1", "d3", "d5", "d7", "e2", "e4", "e6", "e8", "f1", "f3", "f5", "f7", "g2", "g4", "g6", "g8", "h1", "h3", "h5", "h7"};
  vector<string> allSquares = {"a1", "a3", "a5", "a7", "b2", "b4", "b6", "b8", "c1", "c3", "c5", "c7", "d2", "d4", "d6", "d8", "e1", "e3", "e5", "e7", "f2", "f4", "f6", "f8", "g1", "g3", "g5", "g7", "h2", "h4", "h6", "h8", "a2", "a4", "a6", "a8", "b1", "b3", "b6", "b7", "c2", "c4", "c6", "c8", "d1", "d3", "d5", "d7", "e2", "e4", "e6", "e8", "f1", "f3", "f5", "f7", "g2", "g4", "g6", "g8", "h1", "h3", "h5", "h7"};


  cout << "Input your piece: ";
  cin >> idk;

  for(int i = 0; i < idk.size(); i++){
    idk[i] = tolower(idk[i]);
  }
  if(idk == "night"){
    int i = rand()% allSquares.size();
    if(i == 65){i = 64;}

    int j = rand()% allSquares.size();
    if(j == 65){j = 64;}
    while(i == j){j = rand()% allSquares.size(); if(j == 65){j = 64;}}

    fSquare = allSquares[i];
    lSquare = allSquares[j];
  }

  if (idk == "bishop"){
    int randomThing = rand()% 2 + 1;
    if(randomThing == 1){
      int i = rand()% whiteSquares.size();
      if(i == 33){i = 32;}
      fSquare = whiteSquares[i];
      int j = rand()% whiteSquares.size();
      if(j == 33){j = 32;}
      while(i ==j){j = rand()% whiteSquares.size(); if(j == 33){j = 32;}}
      lSquare = whiteSquares[j];
    }
    if(randomThing == 2){
      int i = rand()% blackSquares.size();
      if(i == 33){i = 32;}
      fSquare = blackSquares[i];
      int j = rand()% blackSquares.size();
      if(j == 33){j = 32;}
      while(i ==j){j = rand()% blackSquares.size(); if(j == 33){j = 32;}}
      lSquare = blackSquares[j];
    }
  }

  if(idk == "queen"){
    int i = rand()% allSquares.size();
    if(i == 65){i = 64;}

    int j = rand()% allSquares.size();
    if(j == 65){j = 64;}
    while(i == j){j = rand()% allSquares.size(); if(j == 65){j = 64;}}

    fSquare = allSquares[i];
    lSquare = allSquares[j];
  }

  if(idk == "rook"){
    int i = rand()% allSquares.size();
    if(i == 65){i = 64;}

    int j = rand()% allSquares.size();
    if(j == 65){j = 64;}
    while(i == j){j = rand()% allSquares.size(); if(j == 65){j = 64;}}

    fSquare = allSquares[i];
    lSquare = allSquares[j];
  }

  cout << "begin at: " << fSquare << '\n' << "end at: " << lSquare;
}
