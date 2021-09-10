#include<stdio.h>

int CountAanda(char str[])
{
	int iCnt = 0;
	if(str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if((*str == 'a') || (*str == 'A'))
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
	
	iRet = CountAnda(Arr);
	printf("Frequency of a and A is : %d\n",iRet);
	
	return 0;
}