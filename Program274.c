// Convert lower case to upper case and vice versa
#include<stdio.h>

int strtoggleX(char str[])
{
	if(str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - ('a' - 'A');
		}
		else if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + ('a' - 'A');
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
	
	strtoggleX(Arr);
	printf("Updated string is : %s\n",Arr);
	
	return 0;
}