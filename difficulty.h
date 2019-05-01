#include <string>
using namespace std;

class difficulty {
public:
  difficulty() : level(""), game_win(false), maxGuesses(0) {} //Constructer

  difficulty operator=(difficulty const &rhs){ //Copy Constructer
    this->game_win = rhs.game_win;
    this->maxGuesses = rhs.maxGuesses;
    this->setLevel(rhs.level);
    return *this;
  }

  void setMaxGuesses(){
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

  string getLevel(){
    return level;
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
