// Exercise 1-13
// ================================================================
// Write a program to print a histogram of the lengths of words in
// its input. It is easy to draw the histogram with the bars horizontal; a
// vertical orientation is more challenging.

// Example output
// src λ: cat /Users/paul/Desktop/words | ../bin/1-13 
// 1: *********************************************************************
// 2: ************************************************************
// 3: *********************************************************************
// 4: ***********************************
// 5: ******************************************************
// 6: ********************************************************
// 7: **************************************
// 8: ***************************
// 9: *************************************
// 10: ******************
// 11: *****
// 12: **

#include <stdio.h>
#include <stdbool.h>

#define MAX_WORD_LENGTH 80

int main(char argc, char *argv){

  int wlength[MAX_WORD_LENGTH]; 
  int c = 0, i = 0, j = 0, cwordlength = 0;
  int lastcharword = false, curcharword = false;

  for(i=0;i<MAX_WORD_LENGTH;i++)
    wlength[i] = 0;

  // a : 97, A : 65,  z : 122, Z: 90

  while((c = getchar()) != EOF){

    if(c >= 'A' && c <= 'z'){ // word character
      
      if(lastcharword && curcharword)
        cwordlength++;

      curcharword = true;

    }else{

      // update table
      wlength[cwordlength]++;

      cwordlength = 0;
      curcharword = false;
    }

    lastcharword = curcharword;

  }

  // print histogram
  for(i=1;i<80;i++){

    if(wlength[i] > 0){

      printf("%d: ", i);

      for(j=0; j<wlength[i]; j++)
        putchar('*');
      printf("\n");

    }
  }

  return 0;
}
