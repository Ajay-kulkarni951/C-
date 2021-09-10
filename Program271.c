// Convert upper case to lower case
#include<stdio.h>

int strlwrX(char str[])
{
	if(str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
	
}

int main()
{
	char Arr[10];
	
	printf("Enter a string \n");
	//fgets(Arr,10,stdin);
	scanf("%[^'\n']s",Arr);
	
	strlwrX(Arr);
	printf("Updated string is : %s\n",Arr);
	
	return 0;
}