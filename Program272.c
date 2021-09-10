// Convert lower case to upper case
#include<stdio.h>

int struprX(char str[])
{
	int iCnt = 0;
	if(str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
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
	
	struprX(Arr);
	printf("Updated string is : %s\n",Arr);
	
	return 0;
}