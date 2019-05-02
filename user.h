#include <string>
using namespace std;

class user{
private:
  string game_status;
  int numOfGuesses; //The user's current number of guesses
  int wrongGuesses;

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

  void increaseNumOfWrongGuesses(){ wrongGuesses++;}

  int getNumOfWrongGuesses(){return wrongGuesses;}

};
