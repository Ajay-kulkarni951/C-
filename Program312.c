#include<stdio.h>

void DisplayFactorsI(int iNo)
{
	int i = 1;
	while(i <= (iNo / 2))
	{
		if(iNo % i == 0)
		{
			printf("%d\t",i);
		}
		i++;
	}
}

void DisplayFactorsR(int iNo)
{
	static int i = 1;
	if(i <= (iNo / 2) )
	{
		if(iNo % i == 0)
		{
			printf("%d\t",i);
		}
		i++;
		DisplayFactorsR(iNo);
	}
}

int main()
{
	int iValue = 0;
	printf("Enter Number \n");
	scanf("%d",&iValue);
	DisplayFactorsR(iValue);

	return 0;
}