// Accept numbner from user and check whether that number is palindrome or not.
// Input : 121
// Output : true
// Input : 1222
// Output : false
// Input : 111
// Output : true
// 08-03-2021
#include<stdio.h>
#include<stdbool.h>
// Time complexity : O(N) where N is the number of digits in the input
bool CheckPalindrome(int iNo)
{
	int iDigit = 0, iRev = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iNum = iNo;
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo / 10;
	}
	if(iRev == iNum)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter a number\n");
	scanf("%d",&iValue);
	
	bRet = CheckPalindrome(iValue);
	
	if(bRet == true)
	{
		printf("It is palindrome");
	}
	else
	{
		printf("It is not palindrome");
	}
	return 0;
}