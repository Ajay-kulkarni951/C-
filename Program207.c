// Accept number from user and return aadition of its factors
// Input : 6
// Output : (6) 1 + 2 + 3

#include<stdio.h>

int FactorsSum(int iNo)
{
	int iCnt = 0;
	int ans = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= iNo/2; iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			ans = ans + iCnt;
		}
	}
	return ans;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter a number");
	scanf("%d",&iValue);
	
	iRet = FactorsSum(iValue);
	printf("%d\n",iRet);
	
	return 0;
}