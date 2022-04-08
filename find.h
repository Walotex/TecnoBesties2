/******************************
 *          Find.h            *
 ******************************/


int find(int arr[], int len, int number) {
    int findIndex = 0;

    for (int i = 0; i < len; i++){
        if (arr[i] == number){
            findIndex = i;
        };
    };
    return findIndex;
};