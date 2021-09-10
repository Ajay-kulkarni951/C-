// Accept Number From User And Display the addition of All The Numbers Till That Number.
// Input : 4
// Output : 10 (1 + 2 + 3 + 4)

// Input : -6
// Output : 21 (1 + 2 + 3 + 4 + 5 + 6)

#include<stdio.h>

int Sum(int iValue)
{
	int iAdd = 0;
	int iCnt = 0;
	
	if(iValue == 0)
	{
		return 0;
	}
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	
	for(iCnt = 1; iCnt <= iValue; iCnt++)
	{
		iAdd = iAdd + iCnt;
	}
	return iAdd;
	
}

int main()
{
	int iNo = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	iRet = Sum(iNo);
	
	printf("Addition is : %d\n",iRet);
	return 0;
}