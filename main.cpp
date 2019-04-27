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
  if (!inFile.is_open()){
    cout << "File not open." << endl;
  }
  string line;
  vector<string> string_array;
  while(getline(inFile,line)){
    string_array.push_back(line);
  }
  srand(time(0));
  int random_integer = rand() % 10;
  string &random_word = string_array.at(random_integer);
  word user_word;
  user_word.setWord(random_word);


  return 0;
}
