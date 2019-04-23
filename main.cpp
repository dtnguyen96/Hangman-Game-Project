<<<<<<< HEAD
// chrispapi in the house
#include <iostream>
#incude <fstream>
=======
#include <iostream>
#include <string>
#include <fstream>
#include <random>
>>>>>>> b29aaf66aa73c9b36424adb41d071ad008ff32bd
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

<<<<<<< HEAD
=======
  // select a random word of the selected level
  int num_words = 10;
  string array[10] = {};
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
  cout << "random word: " << array[random];

>>>>>>> b29aaf66aa73c9b36424adb41d071ad008ff32bd
  return 0;
}
