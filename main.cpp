#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

  // get user input for difficulty
  string difficulty;
  int check = 0;
  while(check == 0){
    cout << "Please enter your difficulty: (easy/medium/hard) "
    cin >> difficulty;
    if (difficulty == "easy" || difficulty == "medium" || difficulty == "hard"){
      check = 1;
    }
    else{
      cout << "Incorrect input.";
      cout << "Please enter your difficulty: (easy/medium/hard) ";
      cin >> difficulty;
    }
  }

  // select a random word of the same level
  ifstream inFile("dictionary.txt");
  int random = rand() % 10


  return 0;
}
