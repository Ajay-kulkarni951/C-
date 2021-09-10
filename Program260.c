// Accept N number from user and return that 11 is present or not.
// Date : 17/03/2021
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength)
{
	int i = 0;
	if(Arr == NULL)
	{
		return false;
	}
	
	for(i = 0; i < iLength; i++)
	{
		if(Arr[i] == 11)
		{
			break;
		}
	}
	if(i == iLength)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int *arr = NULL;
	int i = 0, iSize = 0;
	bool bRet = false;
	
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
	
	bRet = Search(arr,iSize);
	if(bRet == true)
	{
		printf("11 is there in the array\n");
	}
	else
	{
		printf("11 is not in the array\n");
	}
	free(arr);
	
	return 0;
}
