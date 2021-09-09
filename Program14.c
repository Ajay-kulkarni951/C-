// 4. Accept one character from user and convert case of that character.
// Input : a Output : A
// Input : D Output : d

#include<stdio.h>

void DisplayConvert(int CValue)
{
 if(CValue >= 97 && CValue <=122)
 {
	printf("%c" ,CValue = CValue - 32);
 }
 else if(CValue >= 65 && CValue <=90)
 {
	printf("%c",CValue = CValue + 32);
 }
}
int main()
{
 char cValue = '\0';

 printf("Enter character\n");
 scanf("%c",&cValue);
 
 DisplayConvert(cValue);
 return 0;
} 