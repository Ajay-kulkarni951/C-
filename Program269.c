#include<stdio.h>

int CountSmall(char str[])
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
	
	iRet = CountSmall(Arr);
	printf("Frequency of small letters : %d\n",iRet);
	
	return 0;
}