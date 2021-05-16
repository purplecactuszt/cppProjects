#include <iostream>
#include <string>
#include<vector>
using namespace std;


int main() {
  int num;
  int wholeNum = 0;
  string numString;
  string currNumStr;
  cout << "Input a number: ";
  cin >> numString;

  for(int i = 0; i < numString.size(); i++){
    currNumStr = numString[i];
    num = stoi(currNumStr);
    num += 1;
    wholeNum *= 10;
    if(num == 10){wholeNum *= 10;}
    wholeNum += num;
  }
  cout << wholeNum;
}
