/* write a recursive function to return the index of first and last occurrence of a character in a string */
#include<stdio.h>
#include<string.h>
int first_occur(char *,char);
int last_occur(char *,char);
int main(void)
{
  char ch;
  char str[101];
	fgets(str, 100,stdin);
	printf("\n char = ");
	scanf("%c",&ch);
	printf("%d %d\n",first_occur(str,ch),last_occur(str,ch));
  return 0;
}
/* returns index of first occurrence of a character in a string and return -1 if character doesn't occur */
int first_occur(char str[],char ch)
{
	int pos=-1;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i] == ch)
			{
				pos = i;
				break;
			}
	}
	if(pos == -1)
		return pos;
	return pos+1;
}

/* returns index of last occurrence of a character in a string and return -1 if character doesn't occur */
int last_occur(char str[],char ch)
{
	int pos=-1;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i] == ch)
			pos = i;
	}
	if(pos == -1)
		return pos;
	return pos+1;
}
