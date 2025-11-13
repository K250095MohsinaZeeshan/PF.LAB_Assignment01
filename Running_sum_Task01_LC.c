#include <stdio.h>
#include <stdlib.h>

int* runningSum(int* numbers, int numbersSize, int* returnSize) 
{
    *returnSize = numbersSize;
    int* result = (int*)malloc(numbersSize * sizeof(int));
    
    if (numbersSize == 0) 
	return result; 
    result[0] = numbers[0];
    int i;
    for (i = 1; i < numbersSize; i++) 
	{
        result[i] = result[i - 1] + numbers[i];
    }
    
    return result;
}

int main()
{
    int n,i;
    printf("RUNNING SUM OF 1D ARRAY\n");
    printf("_______________________\n");
    printf("\nEnter number of elements you want in the array: ");
    scanf("%d", &n);
    if (n <= 0) 
	{
        printf("\nInvalid size.\nRe-enter the size for the array.\n");
        return 1;
    }
    
    int* numbers = (int*)malloc(n * sizeof(int));
    
    printf("\nEnter %d elements of your choice:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &numbers[i]);
    }
    
    int returnSize;
    int* result = runningSum(numbers, n, &returnSize);
    
    printf("\nRunning Sum: [");
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

