#include<stdio.h>

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
	
	DisplayR(iValue);
	
	printf("End Of main\n");
	return 0;
}