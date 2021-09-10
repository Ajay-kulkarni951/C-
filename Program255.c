// Accept N number from user and accept another number from user and find the frequency of that number from N numbers.
// Date : 17/03/2021
#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int Arr[], int iLength, int iFrequency)
{
	int i = 0, iCnt = 0;
	if((Arr == NULL) || (iLength <= 0))
	{
		return -1;
	}
	
	for(i = 0; i < iLength; i++)
	{
		if(iFrequency == Arr[i])
		{
			iCnt++;
		}
	}
	
	return iCnt;
}
		
int main()
{
	int *arr = NULL;
	int i = 0, iSize = 0, iRet = 0, iFre = 0;
	
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
	
	printf("Enter a number for frequency count\n");
	scanf("%d",&iFre);
	iRet = CountFrequency(arr, iSize, iFre);
	
	printf("Frequency of number is : %d\n",iRet);
	
	free(arr);
	
	return 0;
}
