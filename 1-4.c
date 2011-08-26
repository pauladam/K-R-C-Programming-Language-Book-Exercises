#include <stdio.h>

main(){

  int lower, upper, step;
  float fahr, celsius;

  printf("Celsius -> Fahrenheit conversion table\n");
  for(celsius=-20; celsius <= 160;celsius += 20){
    fahr = celsius * (9.0 / 5.0) + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
  }
}
