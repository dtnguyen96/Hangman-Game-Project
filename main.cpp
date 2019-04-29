#include <iostream>
#include <string>
#include <fstream>

#include "difficulty.h"
#include "word.h"
#include "user.h"

using namespace std;

// Call function below and input class values
void printHangman(string random_word, int numGuessesLeft){
  swtich (numGuessesLeft){
    case 0:
      out << "--------------------------------" << endl;
      cout << "            HANGMAN" << endl;
      cout << "--------------------------------" << endl;
      cout << "    0000000000000" << endl;
      cout << "    0           0" << endl;
      cout << "    0           1" << endl;
      cout << "    0          1 1" << endl;
      cout << "    0           1" << endl;
      cout << "    0          324" << endl;
      cout << "    0         3 2 4" << endl;
      cout << "    0        3  2  4" << endl;
      cout << "    0          5 6" << endl;
      cout << "    0         5   6" << endl;
      cout << "    0        5     6" << endl;
      cout << "    0       5       6" << endl;
      cout << "    0" << endl;
      cout << "    0" << endl;
      cout << "    0" << endl;
      cout << "--------------------------------" << endl;
      cout << "Number of letters in word: " random_word.size() << endl;
      cout << "Number of guesses left: " numGuessesLeft << endl;
      break;
    case 1:
      cout << "--------------------------------" << endl;
      cout << "            HANGMAN" << endl;
      cout << "--------------------------------" << endl;
      cout << "    0000000000000" << endl;
      cout << "    0           0" << endl;
      cout << "    0           1" << endl;
      cout << "    0          1 1" << endl;
      cout << "    0           1" << endl;
      cout << "    0          324" << endl;
      cout << "    0         3 2 4" << endl;
      cout << "    0        3  2  4" << endl;
      cout << "    0          5  " << endl;
      cout << "    0         5    " << endl;
      cout << "    0        5      " << endl;
      cout << "    0       5        " << endl;
      cout << "    0" << endl;
      cout << "    0" << endl;
      cout << "    0" << endl;
      cout << "--------------------------------" << endl;
      cout << "Number of letters in word: " random_word.size() << endl;
      cout << "Number of guesses left: " numGuessesLeft << endl;
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    default:
      break;
  }
}

int main(){

  //classes
  user player;
  //difficulty user_difficulty;
  word random_word;

  // ask for new/old game
  string start;
  cout << "Start a new game or continue an old game? (new/old): " << endl;
  cin >> start;

  if (start == "old"){ // load old game

    //The code below is for assigning the information in the text file to the classes

    //user_difficulty.setLevel(level);
    //user_difficulty.setMaxGuesses();
    //player.setNumOfGuesses();
    //random_word.setWord(word);
    //random_word.setNumOfLetttersLeft(numOfLettersLeft);

  }
  else { // load new game

    //get user input for difficulty
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

    // load in appropriate dictionary
    if (diff == "easy"){
      ifstream inFile("dictionary_easy.txt");
    }else if (diff == "medium"){
      ifstream inFile("dictionary_medium.txt");
    }else{
      ifstream inFile("dictionary_hard.txt");
    }

    // set random_word in word class
    random_word.setWord(random_word.getRandomWord(inFile));




  }
  return 0;
}
