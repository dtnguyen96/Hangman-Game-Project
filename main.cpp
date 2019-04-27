#include <iostream>
#include <string>
#include <fstream>
#include <random>

//#include "difficulty.h"
#include "word.h"
#include "user.h"

using namespace std;

int main(){

<<<<<<< HEAD
  //classes
  user player;
  difficulty user_difficulty;
  word random_word;

  string start;
  cout << "New game or continue old game? (new/old): ";
  cin >> start;
  if (start == "old"){
    // load old game
    //user_difficulty.
  }
  else {
    // load new game
    //
  }
=======

>>>>>>> 65e0666724ee92fadfc2db3b30bb99a761af2ccc

  // get user input for difficulty
  string difficulty;
  int check = 0;
  while(check == 0){
    cout << "Please enter your difficulty: (easy/medium/hard) ";
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
<<<<<<< HEAD
  // create difficulty class
  difficulty user_difficulty(diff);

  // select a random word for the selected level
  if (diff == "easy"){
    ifstream inFile("dictionary_easy.txt");
  }else if (diff == "medium"){
    ifstream inFile("dictionary_medium.txt");
  }else{
    ifstream inFile("dictionary_hard.txt");
  }

  // create word class
  word player_word;
  player_word.setWord(user_word.getRandomWord(inFile));
=======

  // select a random word for the selected level
  ifstream inFile("dictionary_easy.txt");
  if (!inFile.is_open()){
    cout << "File not open." << endl;
  }
  int random = rand() % 10;
  cout << random << endl;
  string line;
  int counter = 0;
  while(getline(inFile,line)){
    array[counter] = line;
    counter++;
  }
  srand(time(0));
  int random_integer = rand() % 10;
  string &word = string_array.at(random_integer);
  cout << word << endl;
>>>>>>> 65e0666724ee92fadfc2db3b30bb99a761af2ccc


  return 0;
}
