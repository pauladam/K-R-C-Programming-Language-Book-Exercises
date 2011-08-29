#include <stdio.h>

main(){

  int c;
  int wordcount = 1; // cheating

  int onword = -1;
  int wasonword = -1;

  while((c = getchar()) != EOF){

    onword = c != ' ' ? 1 : 0;

    // transitioned
    if(c == ' ' && onword != wasonword && wasonword != -1){
      wordcount++;
    }

    putchar(c);
    wasonword = onword;
  }
  printf("%d words\n", wordcount);
}
