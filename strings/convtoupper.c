#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
	char str[]="Hello World";
	for(int i=0;i<strlen(str);i++)
	{
		str[i]=toupper(str[i]);
	}
	for(int i=0;i<strlen(str);i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}
