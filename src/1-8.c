// Exercise 1-8
// ================================================================
// Write a program to count blanks, tabs, and newlines. 

#include <stdio.h>

main(){

  int c;
  long nb, nt, nnl;

  nb = nt = nnl = 0;
  
  while((c = getchar()) != EOF)
    if(c == ' ')
      nb++;
    else if(c == '\t')
      nt++;
    else if(c == '\n')
      nnl++;

  printf("\n\nSummary\n");
  printf("========================\n");
  printf("Number of blanks: %ld\n", nb);
  printf("Number of tabs: %ld\n", nt);
  printf("Number of new lines: %ld\n", nnl);

}
