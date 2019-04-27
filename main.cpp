#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <ctime>
#include <cstdlib>

#include "difficuly.h"
#include "word.h"

using namespace std;

int main(){

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


  return 0;
}
