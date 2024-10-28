/*
Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).

Input
The input file contains 4 integer values.

Output
Print DIFERENCA (DIFFERENCE in Portuguese) with all the capital letters, according to the following example, with a blank space before and after the equal signal.
*/
#include <stdio.h>
int diff(int PROD1 , int PROD2){
    return PROD1 - PROD2;
     
}


int main(){
    int A, B, C, D;
    int PROD1, PROD2;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    PROD1 = A * B;
    PROD2 = C * D;

    printf("DIFERENCA = %d\n", diff(PROD1, PROD2));

    return 0;
}