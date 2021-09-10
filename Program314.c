#include<stdio.h>
#include<stdlib.h>

int SumI(int Arr[], int iSize)
{
	int i = 0, sum = 0;
	while(i < iSize)
	{
		sum = sum + Arr[i];
		i++;
	}
	return sum;
}

int SumR(int Arr[], int iSize)
{
	static int i = 0, sum = 0;
	if(i < iSize)
	{
		sum = sum + Arr[i];
		i++;
		SumR(Arr, iSize); 
	}
	return sum;
}

int main()
{
	int iSize = 0, iRet = 0, i = 0;
	int *arr = NULL;;
	printf("Enter size\n");
	scanf("%d",&iSize);
	arr = (int*)malloc(sizeof(int) * iSize);
	printf("Enter elements\n");
	while(i < iSize)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	iRet = SumR(arr,iSize);
	printf("Sum is : %d",iRet);
	free(arr);
	return 0;
}