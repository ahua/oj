#include <stdio.h>

int main(int argc, char *argv[]){
  int i;
  double banlance;
  double sum = 0;
  for(i = 0; i < 12; i++){
    scanf("%lf", &banlance);
    sum += banlance;
  }
  printf("$%.2f\n", sum/12);
  return 0;
}

    
