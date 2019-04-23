<<<<<<< HEAD
// chrispapi in the house
#include <iostream>
#incude <fstream>
=======
#include <iostream>
#include <string>
#include <fstream>
<<<<<<< HEAD
#include <random>
>>>>>>> b29aaf66aa73c9b36424adb41d071ad008ff32bd
=======
#include <cstdlib>
#include <ctime>
#include <vector>
>>>>>>> 5bcde5ebd9ee8b40167452d564635eabe1f9793e
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
  ifstream inFile("dictionary_easy.txt");
  if (!inFile.is_open()){
    cout << "File not open." << endl;
  }

  string line;
  vector<string> string_array;
  while(getline(inFile,line)){
    string_array.push_back(line);
  }
  srand((unsigned)time(0));
  int random_integer = (rand()%10)+1;
  cout << string_array[random_integer];

>>>>>>> b29aaf66aa73c9b36424adb41d071ad008ff32bd
  return 0;
}
