#include <stdio.h>
#include <stdlib.h>
#include "print.h"
#include "sortArray.h"
#include "find.h"

int arr[] = {9,8,7,6,5,4,3,2,1};

int temp = 0;     
int len = sizeof(arr)/sizeof(arr[0]);
int look = 52;

int main(){
	system("clear");

	int sortArray = sort(arr, temp, len);

printf("Find values: %d\n", find(arr, 5, 10));
	

	return 0;
}