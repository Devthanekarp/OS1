/*6.	Write a C Program to sort elements in 1-D Array*/
#include  <stdio.h>

 
int main()
{
    int numbers[5], i ,j ,temp;
 //taking standard input
    for (i = 0; i < 5; i++)
    {
		printf("Enter the Number : %d  : ", (i+1));
        scanf("%d", &numbers[i]);
    }
        
    // Array Sorting - Ascending Order
    for (i = 0; i < 5; ++i)
    {
        for (j = i + 1; j < 5; ++j)
        {
            if (numbers[i] > numbers[j])
            {
                temp =  numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    printf("Sorting Order Array: \n");
    for (i = 0; i < 5; ++i)
        printf("%d\n", numbers[i]);
        
    return 0;
}
