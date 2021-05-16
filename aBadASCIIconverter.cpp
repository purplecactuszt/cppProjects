#include <iostream>
#include <string>
#include <vector>
#include<windows.h>
using namespace std;

int main(){
    string word;
    int asciiVals;
    int choice;
    string asciiToStr;

    cout << "Encode(1) or Decode(2): ";
    cin >> choice;
    if (choice == 1){

    cout << "Enter your word (input only one word at a time!): ";
    cin >> word;
    for(int i = 0; i < word.size(); i++){
      cout << int(word[i]) << ' ';
    }
    cout << int(' ') << endl;
    while(true){
      cout << "If you are done input the following: exitNow1" << endl;
      cout << "Enter your word: ";
      cin >> word;
      if (word == "exitNow1"){
        break;
      }
      for(int i = 0; i < word.size(); i++){
        cout << int(word[i]) << ' ';
    }
    cout << int(' ') << endl;
  }
  }else if (choice == 2){
    cout << "If you want to decode please enter ascii value for 1 char at a time!" << endl;
    cout << "Input ascii value: ";
    cin >> asciiVals;
    asciiToStr += (char)asciiVals;
    while (true){
      cout << "Input ascii value(when you are done with all of the ascii values input number -1): ";
      cin >> asciiVals;
      if(asciiVals == -1){
        break;
      }
      asciiToStr += (char)asciiVals;
    }
   cout << asciiToStr << endl;
  }
  Sleep(3000);
}
