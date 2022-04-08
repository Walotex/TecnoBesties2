#include <stdio.h>
#include <stdlib.h>
#include "find.h"

int arr[] = {9,8,7,6,5,4,3,2,1};

int temp = 0;     
int len = sizeof(arr)/sizeof(arr[0]);
int look = 52;

int main(){
	system("clear");


printf("Find values: %d\n", find(arr, len, 7));
	

	return 0;
}