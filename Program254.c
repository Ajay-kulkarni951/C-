// Accept N number from user and display count of even numbers from that N numebrs.
// Date : 16/03/2021
#include<stdio.h>
#include<stdlib.h>

int CountEvenElements(int Arr[], int iLength)
{
	int i = 0, iCnt = 0;
	
	if((Arr == NULL) || (iLength <= 0))
	{
		return;
	}
	
	for(i = 0; i < iLength; i++)
	{
		if(Arr[i] % 2 == 0)
		{
			iCnt++;
		}
	}
	
	return iCnt;
}
		
int main()
{
	int *arr = NULL;
	int i = 0, iSize = 0, iRet = 0;
	
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
	
	iRet = CountEvenElements(arr, iSize);
	
	printf("Count of even numbers is : %d\n",iRet);
	
	free(arr);
	
	return 0;
}