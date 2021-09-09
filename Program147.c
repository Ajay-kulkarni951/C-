// 2. Write a program which accept two numbers from user and display position 
// of common ON bits from that two numbers. 
// Input : 10 15 (1010 1111) 
// Output : 2 4 
#include<stdio.h>
typedef unsigned int UINT;
void CommonBits(UINT iNo1, UINT iNo2) 
{ 
	UINT iResult = 0;
	int i = 0, iDigit = 0;
	
	iResult = iNo1 & iNo2;
	
	for(i = 1; i <= 32; i++)
	{
		iDigit = iResult % 2;
		if(iDigit == 1)
		{
			printf("%d\t",i);
		}
		iResult = iResult / 2;
	}
}
int main()
{
	UINT iValue1 = 0, iValue2 = 0;
	
	printf("Enter a number\n");
	scanf("%u",&iValue1);
	
	printf("Enter a number\n");
	scanf("%u",&iValue2);
	
	CommonBits(iValue1, iValue2);
	
	return 0;
}