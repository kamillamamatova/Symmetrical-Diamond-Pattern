#include <stdio.h>
#define TOTAL_ROWS 15

int main(){
  int row, column, numstars = 1;
  int half, rate = 1;
  
  for(row = 1; row <= TOTAL_ROWS; row++){
    half = TOTLA_ROWS / 2;

    for(column = 1; column <= half + 1 - numstars; column++){
      printf(" ");
    }

    for(column = 1; column <= 2 * numstars - 1; column++){
      if(row == half + 1 || numstars == col){
        printf("S");
      }
      else{
        printf("*");
      }
    }

    if(numstars == (half + 1)){
      rate = - rate;
    }
    numstars += rate;
    printf("\n");
  }
  return 0;
}
