// Accept a number from user and display the table of that number.
// Input : 4
// Output : 4 8 12 16 20 24 28 32 36 40

#include<stdio.h>

void DisplayTable(int iNo)
{
	int i = 0;
	int ans = 1;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(i = 1; i <= 10; i++)
	{
		ans = iNo * i;
		printf("%d\n",ans);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter a number\n");
	scanf("%d",&iValue);
	
	DisplayTable(iValue);
	
	return 0;	
}
