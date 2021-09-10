// Accept N number from user and accept another number from user and find the last occurrence of that number from N numbers.
// Date : 17/03/2021
#include<stdio.h>
#include<stdlib.h>

int LastOccurrence(int Arr[], int iLength, int iValue)
{
	int i = 0;
	
	if((Arr == NULL) || (iLength <= 0))
	{
		return -1;
	}
	
	for(i = iLength - 1; i >= 0; i--)
	{
		if(iValue == Arr[i])
		{
			break;
		}
	}
	return i;
}
		
int main()
{
	int *arr = NULL;
	int i = 0, iSize = 0, iRet = 0, iNo = 0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	arr = (int*)malloc(iSize * sizeof(int));
	
	if(arr == NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter the elements\n");
	
	for(i = 0; i < iSize; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter a number for search\n");
	scanf("%d",&iNo);
	
	iRet = LastOccurrence(arr, iSize, iNo);
	
	if(iRet == -1)
	{
		printf("Number not found\n");
	}
	else
	{	
		printf("Numbers Last Occurrence is : %d\n",iRet);
	}
	
	free(arr);
	
	return 0;
}
