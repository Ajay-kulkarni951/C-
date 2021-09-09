// 5.Write a program which accept number from user and return difference between 
// summation of all its factors and non factors. 
// Input : 12 
// Output : -34 (16 - 50) 
// Input : 10 
// Output : -29 (8 - 37)
 
#include<stdio.h> 
int FactDiff(int iNo) 
{ 
 int iCnt = 0, iSum1 = 0, iSum2 = 0, iDiff = 0;
	for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iSum1 = iSum1 + iCnt;
		}
	}
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		if(iNo % iCnt != 0)
		{
			iSum2 = iSum2 + iCnt;
		}
	}
	iDiff = iSum1 - iSum2;
	return iDiff;
} 
// Time Complexity = N / 2
int main() 
{ 
 int iValue = 0; 
 int iRet = 0; 
 printf("Enter number\n"); 
 scanf("%d",&iValue); 
 iRet = FactDiff(iValue); 
 printf("%d",iRet); 
 return 0; 
} 