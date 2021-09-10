// Accept number from and toggle its third bit  
 
#include<stdio.h>
 
unsigned int ToggleBit(unsigned int iNo)
{
	unsigned int iMask = 0x00000004;
	unsigned int Result = 0;
 
	Result = iNo ^ iMask;
 
	return Result;
}
 
int main()
{
	unsigned int iValue = 0;
	unsigned int iRet = 0;
 
	printf("Enter number\n");
	scanf("%u",&iValue);
 
	iRet = ToggleBit(iValue);
 
	printf("Number after updation %u\n",iRet);
 
 	return 0;
}