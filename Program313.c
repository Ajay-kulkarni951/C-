#include<stdio.h>

int StrlenR(char *str)
{
	static int i = 0;
	if(*str != '\0')
	{
		i++;
		*str++;
		Strlen(str);
	}
	return i;
}

int Strlen(char *str)
{
	int  i = 0;
	while(*str != '\0')
	{
		i++;
		*str++;
	}
	return i;
}

int main()
{
	char arr[20] = {'\0'}; 
	int iRet = 0;
	printf("Enter Number \n");
	scanf("%[^'\n']s",arr);
	iRet = StrlenR(arr);
	printf("%d",iRet);
	return 0;
}