#include <string>
using namespace std;

class difficulty {
public:
  difficulty(level="") : level(level){} //Constructer

  operator=(difficulty const &rhs){ //Copy Constructer
    this->game_win = rhs.game_win;
    this->maxGuesses = rhs.maxGuesses;
    this->level = rhs.level;
  }

  void setMaxGuesses(string level){
    if(level == "easy"){
      maxGuesses = 6;
    }else if (level == "medium"){
      maxGuesses = 5;
    } else {
      maxGuesses = 4;
    }
  }

  void setLevel(string player_level){
    level = player_level;
  }

  int getMaxGuesses(){ return maxGuesses;}

  void checkGameStatus(string status){
    if(status == "win"){
      game_win = true;
    }else{
      game_win = false;
    }
  }//TEST

private:
  int maxGuesses; //Max guesses user can make
  bool game_win; //Used to check if the game is won
protected:
  string level; //Stores the level chosen by the user
};
