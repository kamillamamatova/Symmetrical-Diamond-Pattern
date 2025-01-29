#include <stdio.h>
#define TOTAL_ROWS 15

int main(){
  int row, column, numstars = 1;
  // half is midpoint
  // rate is controls growth and shrink
  int half, rate = 1;

  // Loop through each row of the pattern
  for(row = 1; row <= TOTAL_ROWS; row++){
    // Middle row index
    half = TOTAL_ROWS / 2;

    // Prints leading spaces to center the pattern
    for(column = 1; column <= half + 1 - numstars; column++){
      printf(" ");
    }

    for(column = 1; column <= 2 * numstars - 1; column++){
      // Prints 'S' if it's the middle row or at the edges of the shape
      if(row == half + 1 || numstars == column){
        printf("S");
      }
      // Prints '*' otherwise
      else{
        printf("*");
      }
    }

    // When it reaches the row after the middle row, it starts shrinking
    if(numstars == (half + 1)){
      // Reverses the growth rate
      rate = -rate;
    }
    // Decreases number of stars
    numstars += rate;
    // Next row
    printf("\n");
  }
  // Exits the program
  return 0;
}
