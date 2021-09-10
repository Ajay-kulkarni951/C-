// Accept string and reverse the string
#include<stdio.h>

int Reverse(char str[])
{
	char *start,*end;
	char temp;
	if(str == NULL)
	{
		return 0;
	}
	start = str;
	end = str;
	while(*end != '\0')
	{
		end++;
	}
	end--;
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
int main()
{
	char Arr[10];
	
	printf("Enter a string \n");
	scanf("%[^'\n']s",Arr);
	
	Reverse(Arr);
	printf("Reverse string is : %s\n",Arr);
	
	return 0;
}