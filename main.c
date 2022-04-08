#include <stdio.h>
#include <stdlib.h>
#include "imprimir.h"
#include "sort.h"
#include "fin.h"

int arr[] = {9,8,7,6,5,4,3,2,1};
//int arr[] = {45,68,98,54,8,52,6,4,6};
int temp = 0;     
int len = sizeof(arr)/sizeof(arr[0]);
int look = 52;

int main(){
	system("clear");
	///printf("\n\n\t***Number of elements present in given array: %d***\n\n", len);
/*	
	int finIndex = fin(arr, len, look);
	printf("Fin number Value: %d\t\t| \tFin number Index: %d\n", arr[finIndex], finIndex);
*/

	int sortArray = sort(arr, temp, len);
	

	return 0;
}
