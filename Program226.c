#include<stdio.h>
int Frequency(int iNo,int i)
{
	int iCnt = 0, iDigit = 0;
	if(i > 9)
	{
		return 0;
	}
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo >0)
	{
		iDigit = iNo % 10;
		if(iDigit == i)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
	
}
int main()
{
	int iValue1 = 0, iValue2 =0, iRet = 0;
	
	printf("Enter a number\n");
	scanf("%d",&iValue1);
	
	printf("Enter a number for frequency count\n");
	scanf("%d",&iValue2);
	
	iRet = Frequency(iValue1,iValue2);
	
	printf("Frequency is : %d\n",iRet);
	
	return 0;
}