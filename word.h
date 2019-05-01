#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "difficulty.h"
using namespace std;

class word : public difficulty{
private:
  int numOfLettersLeft; //Number of letters not guessed yet
  string word_chosen; //Word chosen
  vector<string> word_x; // array of x's for guessing
  vector<string> word_actual;
public:
  word() : numOfLettersLeft(0), word_chosen(""), word_x({}) {}

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
    for (int i = 0; i < word_chosen.size(); i++){
      word_x.push_back("X");
      word_actual.push_back(word_choice[i]);
    }
    this->setNumOfLetttersLeft(word_chosen.size()); //When the word is set, so is the numOfLettersLeft
  }

  void printWord_x() {
    for (int i = 0; i < word_x; i++){
      cout << word_x[i] << " ";
b
    }
    cout << endl;
  }

  void correctGuess(string char) {
    for(int i = 0; i < word_x.size(); x++){
      if(char == word_actual[i]){
        word_x[i] = char;
      }
    }
  }

};
