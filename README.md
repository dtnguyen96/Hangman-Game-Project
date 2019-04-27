# hangman_again
COSC 1430 Final Project

SAVE-STATE FORMAT:

level (diffculty class)
game_win (diffculty class)
numOfGuesses (user class)
word (word class)
numOfLettersLeft (word class)






ALGORITHM  PLAN:

-Create User Object
-Create Difficulty Object
-Create Word Object

-Ask if you want to create or use an old save state
(If yes, refer to Y. If no, refer to N)

----------------------(Y)----------------------------
-Open saved files and put each respected variable into classes
-Load up the hangman display and word display
------------------------------------------------------

-----------------------(N)------------------------------
-Erase save file and start a new
-Take difficulty from user. If it's a bad input, ask again
-If input is good, run "setMaxGuesses()" for the difficulty class. Iterate through respected dictionary and choose the random word
-Create an array that has each letter in the random word in it
-Create an array that has a X for each letter in the random word
-Set values to the class variables that match the word chosen and its difficulty.
--------------------------------------------------------

-Within a while loop, continuously ask user for their guess. Take guess as an array, with each character being split into elements within the array. If the input is "quit", ask the user if they want to save their game. If they do, save it. If not, then just exit the while loop and end the game ("Game Over"?)
-Every time you ask for an input, always print out the hangman right before the "cin". Additionally, print out the number of guess left, with the X'd out array for the random word.
-When the user wins, just say game won or something. If they lose say game over?
