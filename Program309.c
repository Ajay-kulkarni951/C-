#include<stdio.h>

void DisplayI(int iNo)
{
	while(iNo > 0)
	{
		printf("%d\n",iNo);
		iNo--;
	}
}

void DisplayR(int iNo)
{
	if(iNo > 0)
	{
		printf("%d\n",iNo);
		iNo--;
		DisplayR(iNo);
	}
}

int main()
{
	int iValue = 0;
	printf("Enter a number\n");
	scanf("%d",&iValue);
	//DisplayI(iValue);
	DisplayR(iValue);
	return 0;
}