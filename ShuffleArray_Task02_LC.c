#include <stdio.h>
#include <stdlib.h>

int* shuffledArray(int* numbers, int numbersSize, int n, int* returnSize) 
{
    *returnSize = numbersSize;
    int* result = (int*)malloc(numbersSize * sizeof(int));
    
    int i;
    for (i = 0; i < n; i++) 
	{
        result[2 * i] = numbers[i];        
        result[2 * i + 1] = numbers[i + n]; 
    }
    return result;
}
int main() 
{
    int n,i;
    printf("ARRAY'SHUFFLING\n");
    printf("_______________\n");
    printf("\nEnter n ('n' will be half of total elements): ");
    scanf("%d", &n);
    
    int numbersSize = 2 * n;
    int* numbers = (int*)malloc(numbersSize * sizeof(int));
    
    printf("\nEnter %d elements of your choice in the array :\n", numbersSize);
    for (i = 0; i < numbersSize; i++) 
	{
        scanf("%d", &numbers[i]);
    }
    
    int returnSize;
    int* result = shuffledArray(numbers, numbersSize, n, &returnSize);
    
    printf("\nShuffled Array: [");
    for (i = 0; i < returnSize; i++) 
	{
        printf("%d", result[i]);
        if (i < returnSize - 1) 
		printf(", ");
    }
    printf("]\n");
    free(numbers);
    free(result);
    return 0;
}

