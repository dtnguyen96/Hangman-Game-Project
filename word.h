#include "difficulty.h"
#include <fstream>


class word : public difficulty{
private:
  int numOfLettersLeft; //Number of words not guessed yet
  string word; //Word chosen
public:
  word(numOfLettersLeft = 0, word = "") : numOfLettersLeft(numOfLettersLeft), word(word){}

  void setNumOfLetttersLeft(int letters_left){
    numOfLettersLeft = letters_left;
  }
  int getNumOfLettersLeft(){
    return numOfLettersLeft;
  }

  void setWord(string word_choice){
    word = word_choice;
  }
  string getWord(){
    return word;
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

};
