//10
// factors(1,2,5,10)
// non factors(3,4,6,7,8,9)
// 18 - 37
// -19

#include<stdio.h>

int Difference(int iNo)
{
	int iDigit = 0, iSum1 = 0, iSum2 = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iDigit = 1; iDigit <= iNo; iDigit++)
	{
		if(iNo % iDigit == 0)
		{
			iSum1 = iSum1 + iDigit;
		}
		else
		{
			iSum2 = iSum2 + iDigit;
		}
	}
	return iSum1 - iSum2;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = Difference(iValue);
	
	printf("Difference is : %d\n",iRet);
	
	return 0;
}