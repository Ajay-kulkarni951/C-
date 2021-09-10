//Accept nnumbers from user and perform addition of that numbers
#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iSize)
{
	int i = 0, iSum = 0;
	if((Arr == NULL) || (iSize <= 0))
    {  
		return 0;
	}
	for(i = 0; i < iSize; i++)
	{
		iSum = iSum + Arr[i];
	}
	return iSum;
}
int main()
{
	int iLength = 0,iRet = 0, i = 0;
	int *Arr = NULL;
	
	printf("Enter size\n");
	scanf("%d",&iLength);
	
	Arr = (int *)malloc(iLength * sizeof(int));
	
	printf("Enter the elements\n");
	
	for(i = 0; i < iLength; i++)
	{
		scanf("%d",&Arr[i]);
	}
	iRet = Addition(Arr,iLength);
	
	printf("Addition is: %d\n",iRet);
	
	free(arr);
	
	return 0;
}