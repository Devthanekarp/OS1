/*Write a C Program to Find Greatest Element in Array in one dimensional array */
int greatest(int arr[],int n);
#include <stdio.h>
int main()
{
	int arr[] = {10,20,30,35,40,50};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Greatest in given array is %d", greatest(arr, n));
	return 0;
} 
int greatest(int arr[], int n)
{
	int i;
	int max = arr[0];
    
	for (i = 1; i < n; i++)
        if (arr[i] > max)
        {
        	max = arr[i];
 	}
    return max;
}
 

