#include<iostream>
#include<string.h>
using namespace std;

int main (){

  //initialize beginning arrays
  char input[80];
  char processed [80];
  //read in the input, then clear the line
  cin.get(input, 80);
  cin.get();
  //initialize the index and count counters
  int index = 0;
  int count = 0;
  //cycle through the input string
  for(int a = 0; a < 80; a++){
    //calculate the acii for each char in the input
    int acii = int(input[a]);
    //if the char is a null, and you haven't added the end null yet, then add it to
    //processed
    if(count==0 && acii==0){
      processed[index] = input[a];
      count++;
      index++;
      break;
    }
    //if the char is a lowercase letter, add it to processed
    else if(acii>=97 && acii <=122){
      processed[index] = input[a];
      index++;
    }
    //if the char is an uppercase letter, conver it to lowercase, then add it to
    //processed
    else if(acii>=64 && acii<=90){
      processed[index] = acii+32;
      index++;
    }
  }
  //make the size of the final arrays equal to the number of chars you added to the
  //processed array, minus the null char
  char finalf[index-1];
  char finalb[index-1];
  //cycle through the processed array forwards and backward and add each char to the
  //arrays
  for(int b = 0; b < index-1; b++){
    finalf[b] = processed[b];
    finalb[b] = processed[index-b-2];
  }
  //cycle through both arrays and if at any point the chars are not the same, it's
  //not a palindrome
  bool pal= true;
  for(int c = 0; c < index-1; c++){
    if(finalf[c]!=finalb[c]){
      pal = false;
    }
  }
  //print out whether it's a palindrome or not
  if(pal){
    cout << "palindrome.";
  }
  else{
    cout << "not a palindrome.";
  }
  return 0;
  
}
