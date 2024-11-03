/** lab30-3.c
* ===========================================================  
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 30
* ===========================================================  */

#include "lab30functs.h"

int main(void) {

    // Read the zyBooks Lab writeup.  Then answer to the questions below in each printf() statement
    // 1) First determine the condition and return value for the base case of your function.
    printf("When XXXXX -> return XXXXX;\n");

    // 2) Now determine the recursive case, note that you might have slightly different cases
    // for an even number of buns and for an odd number
    printf("When XXXXX -> return XXXXX + count_ears2(numNewBunnies - 1);\n");
    printf("Otherwise when even -> return XXXXX + count_ears2(numNewBunnies - 1);\n");

    // 3) Now you need to actually code up the function, the prototype is
    // already in the .h file and a skeleton of the definition is below
    // in the inmplementation file lab30functs.c
    int numNewBunnies = 10;
    printf("%d bunnies, for insurance purposes, have %d ears\n", numNewBunnies, count_ears2(numNewBunnies));

    return 0;
}
