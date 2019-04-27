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

};
