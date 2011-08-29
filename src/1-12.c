// Exercise 1-12
// ================================================================
// Write a program that prints its input one word per line.

#include <stdio.h>
#include <stdbool.h>

main(int argc, char *argv){

  int c;
  bool afternewline = false;

  while((c = getchar()) != EOF){
    if((c == ' ' || c == '\n') && !afternewline){
      printf("\n");
      afternewline = true;
    }else if(c != ' ' && c != '\n'){
      putchar(c);
      afternewline = false;
    }
  }

  return 0;
}
