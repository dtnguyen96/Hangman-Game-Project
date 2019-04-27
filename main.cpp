#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <vector>

#include "difficulty.h"
#include "word.h"
#include "user.h"

using namespace std;

int main(){

  string start;
  cout << "New game or continue old game? (new/old): ";
  cin >> start;
  if (start == "old"){
    // load old game
  }
  else {
    // load new game
  }

  // get user input for difficulty
  string diff;
  int check = 0;
  while(check == 0){
    cout << "Please enter your difficulty: (easy/medium/hard) ";
    cin >> diff;
    if (difficulty == "easy" || difficulty == "medium" || difficulty == "hard"){
      check = 1;
    }
    else{
      cout << "Incorrect input.";
      cout << "Please enter your difficulty: (easy/medium/hard) ";
      cin >> diff;
    }
  }
  difficulty user_difficulty(diff);

  // select a random word for the selected level
  ifstream inFile("dictionary_easy.txt");

  word user_word;
  user_word.setWord(user_word.getRandomWord);


  return 0;
}
