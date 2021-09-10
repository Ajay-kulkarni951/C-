// Accept string and display the string in reverse order
#include<stdio.h>

int Display(char str[])
{
	int iCnt = 0;
	if(str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	str--;
	for(; iCnt > 0; iCnt--,str --)
	{
		printf("%c\n",*str);
	}
	
}
// Time Complexity : 2N
int main()
{
	char Arr[10];
	
	printf("Enter a string \n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	
	return 0;
}