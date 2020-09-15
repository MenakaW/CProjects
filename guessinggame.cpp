#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<cstdlib>
#include<stdlib.h>
#include<ctime>
#include<time.h>
using namespace std;

int main(){
  int random = 0;
  //setting the seed of rand()
  srand(time(NULL));
  char decision = 'y';
  //while they still want to play
  while(decision=='y'){
    //every time you restart the game, set count to 0
    int count = 0;
    //generate a random number from 0-100 
    random = (int)((((double)rand())/RAND_MAX)*100);
    //prompt the user to guess
    cout << "Guess a number between 0 and 100 inclusive" << endl;
    int guess = -1;
    //boolean represents if the user ahs guessed correctly or not
    bool guessed = false;
    //while the user is still trying to guess the random number
    while(!guessed){
      //get the user's input 
      cin >> guess;
      //increase count by 1
      count++;
      //check whether the guess is too high, low, or equal to the random number
      if(guess > random){
	cout << "Sorry, your guess is too high! Try again!" << endl;
      }
      else if (guess < random){
	cout << "Sorry, your guess is too low! Try again!" << endl;
      }
      else{
	cout << "You guessed correct and it took you " << count << " guesses. Good Job!" << endl;
	guessed = true;
      }
    }
    //ask if they want to play again, and assign their response to a char
    cout << "Would you like to play again? Type y or n" << endl;
    cin >> decision;
  }
  return 0;
}
