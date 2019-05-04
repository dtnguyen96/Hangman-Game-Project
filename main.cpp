#include <iostream>
#include <string>
#include <fstream>

//#include "user.h"
//#include "difficulty.h"
#include "word.h"

using namespace std;



// Call hangman function below and input class values
void printHangman(word random_word, int max, user& player){
  int numGuessesLeft = max - player.getNumOfGuesses();
  cout << numGuessesLeft << "test" << endl;
  switch (numGuessesLeft){
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
      cout << "Number of letters in word: " << random_word.getNumOfLettersLeft() << endl;
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
      cout << "Number of letters in word: " << random_word.getNumOfLettersLeft() << endl;
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
      cout << "Number of letters in word: " << random_word.getNumOfLettersLeft() << endl;
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
      cout << "Number of letters in word: " << random_word.getNumOfLettersLeft() << endl;
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
      cout << "Number of letters in word: " <<random_word.getNumOfLettersLeft() << endl;
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
      cout << "Number of letters in word: " << random_word.getNumOfLettersLeft() << endl;
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
      cout << "Number of letters in word: " << random_word.getNumOfLettersLeft() << endl;
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
  cout << "INSTRUCTIONS: In order to quit and save your game, type 'quit' after you choose your settings" << endl;
  cout << "WARNING: Compiling code more than once will delete the save file! If you wish to play an old game, only run!! Additionally, do not save a file if you have not provided an input" << endl;
  // ask for new/old game
  string start;
  cout << "Start a new game or continue an old game? (new/old): " << endl;
  cin >> start;

  if (start == "old"){ // load old game
    player.loaded_game();
    ifstream oldgame("save_state.txt");
    string level1, type, checktype, goodGuesses;
    int guesses;
    string word_choice;
    int letters_left;
    int wrongGuesses;

//there's still some issues with the save file stuff, for some reason it ony passes the word with the last character taken off
//i also need to figure out how im gonna pass the word_x...
    oldgame.peek();
    if(oldgame.eof()){
      cout << "ERROR!! NO SAVE FILE TO LOAD!!" << endl;
      return 0;
    }

    oldgame >> level1;
    oldgame >> guesses;
    oldgame >> goodGuesses;
    //if(!goodGuesses.empty()){oldgame >> goodGuesses;}
    oldgame >> wrongGuesses;
    oldgame >> word_choice;
    oldgame >> letters_left;

    user_difficulty.setLevel(level1);
    //cout << level1 << " is the level." << endl; //for testing the file reading...
    user_difficulty.setMaxGuesses();
    player.setNumOfGuesses(guesses);
    player.setGood_Guesses(goodGuesses);
    player.setNumOfWrongGuesses(wrongGuesses);
    random_word.setWord(word_choice);
    random_word.setWord_x(player);
    random_word.setNumOfLettersLeft(letters_left);

    oldgame.close();

    //The code below is for assigning the information in the text file to the classes
  }
  else { // load new game
    //get user input for difficulty
    string diff;
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
      random_word.setWord(random_word.getRandomWord(inFile));
    }else if (diff == "medium"){
      ifstream inFile("dictionary_medium.txt");
      random_word.setWord(random_word.getRandomWord(inFile));
    }else{
      ifstream inFile("dictionary_hard.txt");
      random_word.setWord(random_word.getRandomWord(inFile));
    }
    // set level in difficulty class
    user_difficulty.setLevel(diff);
    // set max guesses in difficulty class
    user_difficulty.setMaxGuesses();
    // set number of X's in array
    random_word.setWord_x(player);
  }

  //print the hangman
  printHangman(random_word,user_difficulty.getMaxGuesses(), player);
  // start while loop to enter guessing phase
    while(!user_difficulty.getGame_Win()){
      random_word.printWord_x();
      //take user's guess but make sure to account for if user wants to save a file
      string guess;
      cin >> guess;

      if(!random_word.checkGuess(guess,player)){
        cout << endl << "Incorrect guess!" << endl;
        //print the hangman again
        player.increaseNumOfWrongGuesses();
        player.increaseNumOfGuesses();
        printHangman(random_word,user_difficulty.getMaxGuesses(), player);
    }else{
      if(guess == "quit"){break;}
      else{player.addGood_Guess(guess);}
  }
      //below checks to see if the game should end. it ends if either word_x is solved or if the max # of guesses have been made
      if(random_word.getNumOfLettersLeft() < 1 || player.getNumOfGuesses() == user_difficulty.getMaxGuesses()){
        break;}
    }
  ofstream newgame("save_state.txt");
//Checks to see if the game is won or lost
  if (random_word.getNumOfLettersLeft() < 1){
    cout << "You Won" << endl;
    newgame.close();
    }
  else if (player.getNumOfGuesses()==user_difficulty.getMaxGuesses()){
    cout<< "Game Over" << endl;
    newgame.close();
  }
  else {
  //Saves information on save file

  newgame<< user_difficulty.getLevel() <<endl;
  newgame << player.getNumOfGuesses() << endl;

  if(player.getGood_Guesses()!=""){newgame << player.getGood_Guesses() << endl;}
  else{newgame << "null" << endl;}
  newgame << player.getNumOfWrongGuesses() << endl;
  newgame << random_word.getWord()<<endl;
  newgame << random_word.getNumOfLettersLeft();
  cout << "Save state made." << endl;
  newgame.close();
}
  return 0;
}
