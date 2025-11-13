#include <stdio.h>
#include <stdlib.h>

int compareArray(const void *a, const void *b) 
{
    return (*(int *)a - *(int *)b);
}

int main() 
{
    int n,i;
    printf("TRANFORM ARRAYS BY PARITY\n");
    printf("_________________________\n");
    printf("\nEnter number of elements: ");
    scanf("%d", &n);
    
    int numbers[n];
    
    printf("\nEnter %d elements of your choice:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &numbers[i]);
    }
    
    for (i = 0; i < n; i++) 
	{
        if (numbers[i] % 2 == 0)
            numbers[i] = 0;
        else
            numbers[i] = 1;
    }

    qsort(numbers, n, sizeof(int), compareArray);
    
    printf("\nTransformed and Sorted Array(in form of 0 & 1) will be: [");
    for (i = 0; i < n; i++) 
	{
        printf("%d", numbers[i]);
        if (i < n - 1) 
		printf(", ");
    }
    printf("]\n");
    
    return 0;
}

