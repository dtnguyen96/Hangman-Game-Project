#include <iostream>
#include <string>
#include <fstream>

#include "difficulty.h"
#include "word.h"
#include "user.h"

using namespace std;



// Call hangman function below and input class values
void printHangman(string random_word, int max, user player){
  int numGuessesLeft = max - player.getNumOfGuesses().
  switch (player.getNumOfWrongGuesses()){
    case 0:
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
      cout << "    0          5 6" << endl;
      cout << "    0         5   6" << endl;
      cout << "    0        5     6" << endl;
      cout << "    0       5       6" << endl;
      cout << "    0" << endl;
      cout << "    0" << endl;
      cout << "    0" << endl;
      cout << "--------------------------------" << endl;
      cout << "Number of letters in word: " << random_word.size() << endl;
      cout << "Number of guesses left: " << numGuessesLeft << endl;
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
      cout << "Number of letters in word: " << random_word.size() << endl;
      cout << "Number of guesses left: " << numGuessesLeft << endl;
      break;
    case 2:
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
      cout << "    0             " << endl;
      cout << "    0              " << endl;
      cout << "    0               " << endl;
      cout << "    0                " << endl;
      cout << "    0" << endl;
      cout << "    0" << endl;
      cout << "    0" << endl;
      cout << "--------------------------------" << endl;
      cout << "Number of letters in word: " << random_word.size() << endl;
      cout << "Number of guesses left: " << numGuessesLeft << endl;
      break;
    case 3:
      cout << "--------------------------------" << endl;
      cout << "            HANGMAN" << endl;
      cout << "--------------------------------" << endl;
      cout << "    0000000000000" << endl;
      cout << "    0           0" << endl;
      cout << "    0           1" << endl;
      cout << "    0          1 1" << endl;
      cout << "    0           1" << endl;
      cout << "    0          32 " << endl;
      cout << "    0         3 2  " << endl;
      cout << "    0        3  2   " << endl;
      cout << "    0             " << endl;
      cout << "    0              " << endl;
      cout << "    0               " << endl;
      cout << "    0                " << endl;
      cout << "    0" << endl;
      cout << "    0" << endl;
      cout << "    0" << endl;
      cout << "--------------------------------" << endl;
      cout << "Number of letters in word: " << random_word.size() << endl;
      cout << "Number of guesses left: " << numGuessesLeft << endl;
      break;
    case 4:
      cout << "--------------------------------" << endl;
      cout << "            HANGMAN" << endl;
      cout << "--------------------------------" << endl;
      cout << "    0000000000000" << endl;
      cout << "    0           0" << endl;
      cout << "    0           1" << endl;
      cout << "    0          1 1" << endl;
      cout << "    0           1" << endl;
      cout << "    0           2 " << endl;
      cout << "    0           2  " << endl;
      cout << "    0           2   " << endl;
      cout << "    0             " << endl;
      cout << "    0              " << endl;
      cout << "    0               " << endl;
      cout << "    0                " << endl;
      cout << "    0" << endl;
      cout << "    0" << endl;
      cout << "    0" << endl;
      cout << "--------------------------------" << endl;
      cout << "Number of letters in word: " << random_word.size() << endl;
      cout << "Number of guesses left: " << numGuessesLeft << endl;
      break;
    case 5:
      cout << "--------------------------------" << endl;
      cout << "            HANGMAN" << endl;
      cout << "--------------------------------" << endl;
      cout << "    0000000000000" << endl;
      cout << "    0           0" << endl;
      cout << "    0           1" << endl;
      cout << "    0          1 1" << endl;
      cout << "    0           1" << endl;
      cout << "    0             " << endl;
      cout << "    0              " << endl;
      cout << "    0               " << endl;
      cout << "    0             " << endl;
      cout << "    0              " << endl;
      cout << "    0               " << endl;
      cout << "    0                " << endl;
      cout << "    0" << endl;
      cout << "    0" << endl;
      cout << "    0" << endl;
      cout << "--------------------------------" << endl;
      cout << "Number of letters in word: " << random_word.size() << endl;
      cout << "Number of guesses left: " << numGuessesLeft << endl;
      break;
    case 6:
      cout << "--------------------------------" << endl;
      cout << "            HANGMAN" << endl;
      cout << "--------------------------------" << endl;
      cout << "    0000000000000" << endl;
      cout << "    0           0" << endl;
      cout << "    0            " << endl;
      cout << "    0             " << endl;
      cout << "    0            " << endl;
      cout << "    0             " << endl;
      cout << "    0              " << endl;
      cout << "    0               " << endl;
      cout << "    0             " << endl;
      cout << "    0              " << endl;
      cout << "    0               " << endl;
      cout << "    0                " << endl;
      cout << "    0" << endl;
      cout << "    0" << endl;
      cout << "    0" << endl;
      cout << "--------------------------------" << endl;
      cout << "Number of letters in word: " << random_word.size() << endl;
      cout << "Number of guesses left: " << numGuessesLeft << endl;
      break;
    default:
      break;
  }
}

int main(){

  //classes
  user player;
  difficulty user_difficulty;
  word random_word;

  // ask for new/old game
  string start;
  cout << "Start a new game or continue an old game? (new/old): " << endl;
  cin >> start;

  if (start == "old"){ // load old game
    ifstream oldgame("Game2.txt");
    string level1;
    int guesses;
    string word_choice;
    int letters_left;
    while (oldgame>>level1>>guesses>>word_choice>>letters_left){
      user_difficulty.setLevel(level1);
      player.setNumOfGuesses(guesses);
      random_word.setWord(word_choice);
      random_word.setNumOfLetttersLeft(letters_left);
    }

    //The code below is for assigning the information in the text file to the classes
  }
  else { // load new game
    //get user input for difficulty

    int check = 0;
    while(check == 0){
      cout << "Please enter your difficulty: (easy/medium/hard) " << endl;
      cin >> diff;
      if (diff == "easy" || diff == "medium" || diff == "hard"){
        check = 1;
        //set settings for the user's difficulty
        user_difficulty.setLevel(diff);
      }
      else{//user used incorrect input
        cout << "Incorrect input." << endl;
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
    // set level in difficulty class
    user_difficulty.setLevel(diff);
    // set max guesses in difficulty class
    user_difficulty.setMaxGuesses();
    // set number of X's in array
    random_word.setWord_x();
  }


  //print the hangman

  // start while loop to enter guessing phase
    while(!user_difficulty.getGame_Win()){
      random_word.printWord_x();
      //take user's guess but make sure to account for if user wants to save a file

      string guess;
      cin >> guess;

      if(!random_word.checkGuess(guess,player)){
        cout << "Incorrect guess!" << endl;
        //print the hangman again

    }

      //below checks to see if the game should end. it ends if either word_x is solved or if the max # of guesses have been made
      if(random_word.getNumOfLettersLeft() == 0 || player.getNumOfGuesses() == user_difficulty.getMaxGuesses()){
        break;}
    }






  //Store important values of the gameplay
  //MAKE SURE TO CHECK IF THE GAME IS WON OR NOT!!
  ofstream newgame("Game1.txt");
  if (random_word.getNumOfLettersLeft()==0){
    cout << "You Won";
    newgame.close();
    }
  else if (player.getNumOfGuesses()==user_difficulty.getMaxGuesses()){
    cout<< "Game Over";
    newgame.close();
  }
  else {
  newgame<< user_difficulty.getLevel() <<endl;
  newgame << player.getNumOfGuesses() << endl;
  newgame << random_word.getWord()<<endl;
  newgame << random_word.getNumOfLettersLeft();
  newgame.close();
}
  return 0;
}
