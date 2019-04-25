class difficuly {
public:
  difficuly(level="") : level(level){} //Constructer

  operator=(diffculty const &rhs){ //Copy Constructer
    this->game_win = rhs.game_win;
    this->maxGuesses = rhs.maxGuesses;
    this->level = rhs.level;
  }

  void setMaxGuesses(){
    if(level = "easy")
  }
  int getMaxGuesses(){ return maxGuesses;}

  void checkGameStatus(string status){
    if(string == "win"){
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
