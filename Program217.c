// Accept numbner from user and return its reverse number
// Input : 7521
// Output : 1257
// Input : 4502
// Output : 2054
// Input : 7500
// Output : 57
// 08-03-2021
#include<stdio.h>

int Reverse(int iNo)
{
	int iDigit = 0, iMul = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		
		if(iDigit != 0)
		{
			iMul = (iMul * 10) + iDigit;
		}
		iNo = iNo / 10;
	}
	
	return iMul;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter a number\n");
	scanf("%d",&iValue);
	
	iRet = Reverse(iValue);
	
	printf("Reverse number is : %d\n",iRet);
	
	return 0;
}