#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "max.h"
#include "min.h"
#include "find.h"
#include "Odd.h"

#define MAX 20

int main (){
    int array[5] = {5, 2 ,10, 14, 9};
    int Oddie = Odd(array, 5);
    
    printf("Max values: %d\n", max(array, 5));

    printf("Min values: %d\n", min(array, 5));

    printf("Odd values: %d\n", Oddie);

    printf("Find values: %d\n", find(array, 5, 10));


    
    return 0;
}