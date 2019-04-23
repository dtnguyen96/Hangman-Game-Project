class difficuly {
public:
  difficuly(level="") : level(level){}


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
  int maxGuesses;
  bool game_win;
protected:
  string level;
};
