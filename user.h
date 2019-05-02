#include <string>
using namespace std;

class user{
private:
  string game_status;
public:
  user(numOfGuesses = 0) : numOfGuesses(numOfGuess), game_status("start"){}

  void setGameStatus(string status){ game_status = status;
  }
  string getGameStatus(){ return game_status;}

  int getNumOfGuesses(){ return numOfGuesses;
  }
  void setNumOfGuesses(int guesses){ numOfGuesses = guesses;
  }
  void increaseNumOfGuesses(){ numOfGuess++;}

protected:
  int numOfGuesses; //The user's current number of guesses
};
