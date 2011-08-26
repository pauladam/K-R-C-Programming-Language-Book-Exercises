// Verify that the expression getchar() != EOF is 0 or 1. 

#include <stdio.h>

main(){
  
  printf("Enter a character: ");
  printf("The expression getchar() != EOF is 0 or 1, the value is: %d\n", 
         getchar() != EOF);

}
