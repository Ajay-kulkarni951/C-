// Accept N numbers from user and display only Even numbers from that N numbers.
// Date : 16/03/2021
#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iSize)
{
	int i = 0;
	
	if((Arr == NULL) || (iLength <= 0))
	{
		return;
	}
	
	for(i = 0; i < iSize; i++)
	{
		if(Arr[i] % 2 == 0)
		{
			printf("%d is even number\n",Arr[i]);
		}
	}
}
int main()
{
	int *arr = NULL;
	int iLength = 0, i = 0;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iLength);
	
	arr = (int*)malloc(iLength * sizeof(int));
	
	if(arr == NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter the elements\n");
	for(i = 0; i < iLength; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	DisplayEven(arr, iLength);
	
	free(arr);
	
	return 0;
}