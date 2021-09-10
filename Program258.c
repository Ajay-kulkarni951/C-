// Accept N number from user and return largest number.
// Date : 17/03/2021
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
	int i = 0, iMax = 0 ;
	
	if((Arr == NULL) || (iLength <= 0))
	{
		return -1;
	}
	
	iMax = Arr[0];
	
	for(i = 0; i < iLength; i++)
	{
		if(Arr[i] > iMax)
		{
			iMax = Arr[i];
		}
	}
	return iMax;
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
	
	iRet = Maximum(arr, iSize);
		
	printf("Largest value is : %d\n",iRet);

	free(arr);
	
	return 0;
}
