#include<stdio.h>

void DisplayI()
{
	int i = 0;
	for(int i = 1; i <= 4; i++)
	{
		printf("*\n");
	}
}

void DisplayR()
{
	static int i = 1;

	if(i <= 4)
	{
		printf("*\n");
		i++;
		DisplayR();
	}
}

int main()
{
	DisplayR();
	return 0;
}