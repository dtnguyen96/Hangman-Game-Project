class user{
private:
  string game_status;
public:
  User(numOfGuesses = 0) : numOfGuesses(numOfGuesses), game_status("start"){}

  void setGameStatus(string status){ game_status = status;
  }
  string getGameStatus(){ return game_status;}

  int getNumOfGuesses(){ return numOfGuesses;
  }
  void setNumOfGuesses(int guesses){ numOfGuesses = guesses;
  }

protected:
  int numOfGuesses; //The user's current number of guesses
};
