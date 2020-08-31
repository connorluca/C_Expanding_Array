/*
 * C implementation to expand an array by one to add a new element.
 */

/* 
 * File:   main.c
 * Author: Connor McCrum
 *
 * Created on August 31, 2020, 12:19 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "ExpandArray.c"
/*
 * 
 */
int main(int argc, char** argv) {
    int tooSmall[] = {11};
    tooSmall = addElement(tooSmall, 22);
    //print contents and size to show expansion
    printf("Array Size = %d/n", sizeof(tooSmall));
    for (int j = 0; j < sizeof(tooSmall); j++ ) {
      printf("Element[%d] = %d\n", j, tooSmall[j] );
   }
}

