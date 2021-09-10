// Accept string from user and count white spaces from that string
#include<stdio.h>

int WhiteSpace(char str[])
{
	int iCnt = 0;
	if(str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[10];
	int iRet = 0;
	
	printf("Enter a string \n");
	//fgets(Arr,10,stdin);
	scanf("%[^'\n']s",Arr);
	
	iRet = WhiteSpace(Arr);
	printf("Frequency of white spaces : %d\n",iRet);
	
	return 0;
}