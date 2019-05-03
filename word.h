#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "difficulty.h"
#include "user.h"
using namespace std;

class word : public difficulty{
private:
  int numOfLettersLeft; //Number of letters not guessed yet
  string word_chosen; //Word chosen
  vector<char> word_x; // array of x's for guessing
  vector<char> word_actual;
public:
  word() : numOfLettersLeft(0), word_chosen("") {
    vector<char> temp;
    word_x=temp;
  }

  void setNumOfLetttersLeft(int letters_left){
    numOfLettersLeft = letters_left;
  }

  int getNumOfLettersLeft(){
    return numOfLettersLeft;
  }

  void setWord(string word_choice){
    word_chosen = word_choice;
  }
  string getWord(){
    return word_chosen;
  }

  string getRandomWord(ifstream &inFile){
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
    return random_word;
  }

  void setWord_x() {
    for (int i = 0; i < word_chosen.size()-1; i++){
      word_x.push_back('X');
      word_actual.push_back(word_chosen[i]);
    }
    this->setNumOfLetttersLeft(word_chosen.size()-1); //When the word is set, so is the numOfLettersLeft
  }

  void printWord_x() {
    for (int i = 0; i < word_x.size(); i++){
      cout << word_x[i] << " ";
    }
    cout << endl << endl;
  }

  // void correctGuess(string char) {
  //   for(int i = 0; i < word_x.size(); x++){
  //     if(char == word_actual[i]){
  //       word_x[i] = char;
  //     }
  //   }
  // }

//TRY TO MAKE SURE YOU CAN COMPENSATE FOR A WORD BEING A GUESS!!!
// bool checkGuess(string guess){
//   bool good_guess = false;
//
//   for(int i = 0; i < word_x.size(); x++){
//       word_x[i] = guess;
//       good_guess = true;
//       numOfLettersLeft--;
//     }
//   }if(good_guess == false){
//     cout << "Bad guess!";
//   }
//   return good_guess;
// }

bool checkGuess(string guess, user player){
  bool good_guess = false;

  //
  // if(guess.size() = 1 || guess.size() != word_actual.size()){
  //   cout << "Bad input, " << endl;
  //   return true;
  // }

  player.increaseNumOfGuesses();

  for(int i = 0; i < guess.size(); i++){
    for(int j = 0; j < word_x.size(); j++){
      if(word_actual[j]==guess[i]){
        word_x[j] = guess[i];
        good_guess = true;
        numOfLettersLeft--;
      }
    }
  }

  if(!good_guess){
    player.increaseNumOfWrongGuesses();
  }

  return good_guess;
}
};
