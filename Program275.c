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
	while(iCnt > 0)
	{
		printf("%c\n",*str);
		iCnt--;
		str--;
	}
	
}
// Time Complexity : 2N
int main()
{
	char Arr[10];
	
	printf("Enter a string \n");
	//fgets(Arr,10,stdin);
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	
	return 0;
}