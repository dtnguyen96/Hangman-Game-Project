#include <string>
using namespace std;

class user{
private:
  string game_status;
  int numOfGuesses; //The user's current number of guesses
  int wrongGuesses;
  bool loaded_game_status = false;
  string good_guesses = "";

public:
  user(int numOfGuesses = 0) : numOfGuesses(numOfGuesses), game_status("start"), wrongGuesses(0){}

  void setGameStatus(string status){ game_status = status;
  }
  string getGameStatus(){ return game_status;}

  int getNumOfGuesses(){ return numOfGuesses;
  }
  void setNumOfGuesses(int guesses){ numOfGuesses = guesses;
  }

  void increaseNumOfGuesses(){ numOfGuesses++;}

  void setNumOfWrongGuesses(int wrongGuesses){ wrongGuesses = wrongGuesses;}

  void setGood_Guesses(string input) {good_guesses = input;}

  void increaseNumOfWrongGuesses(){ wrongGuesses++;}

  int getNumOfWrongGuesses(){return wrongGuesses;}

  void addGood_Guess(string input){
    //cout << "Guess being added" << endl;
    good_guesses += input;
  }

  string getGood_Guesses(){
    return good_guesses;
  }

  void loaded_game(){
    loaded_game_status = true;
  }

  bool checkLoaded_Game(){
    return loaded_game_status;
  }

};
