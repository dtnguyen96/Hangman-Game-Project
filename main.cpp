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

  //classes
  user player;
  difficulty user_difficulty;
  word random_word;

  string start;
  cout << "New game or continue old game? (new/old): ";
  cin >> start;
  if (start == "old"){
    // load old game

    //The code below is for assigning the information in the text file to the classes

    //user_difficulty.setLevel(level);
    //user_difficulty.setMaxGuesses();
    //player.setNumOfGuesses();
    //random_word.setWord(word);
    //random_word.setNumOfLetttersLeft(numOfLettersLeft);

  }
  else {
    // load new game
    //


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
}
  return 0;
}
