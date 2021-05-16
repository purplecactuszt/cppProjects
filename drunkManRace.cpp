#include<iostream>
#include<cmath>
#include<cstdlib>
#include<windows.h>
#include<ctime>
using namespace std;
int main (){
  srand(time(0));
  const int size = 100;
  int pos = size/2;
  cout << "Enter a character to begin\n";
  char c; cin >> c;
  while (true){
    cout << "|LOSS|";
    for (int i = 0; i <= size; i++){
      if (i == pos){cout<< c;}
      else{cout<< ' ';}
    }
    cout << "|FINISH|\n";
    int move = rand()%3 - 1;
    pos += move;
    if(pos < 1){cout<< "You lose!";Sleep(3000); break;}
    if(pos >= size){cout<< "You win!";Sleep(3000); break;}
  }
}
