/* write a recursive function to return the index of first and last occurrence of a character in a string */
#include<stdio.h>
#include<string.h>
int first_occur(char *,char,int);
int last_occur(char *,char,int,int);
int main(void)
{
  char ch;
  char str[101];
	fgets(str, 100,stdin);
	printf("\n char = ");
	scanf("%c",&ch);
	printf("%d %d\n",first_occur(str,ch,0),last_occur(str,ch,0,-1));
  return 0;
}
/* returns index of first occurrence of a character in a string and return -1 if character doesn't occur */
int first_occur(char str[],char ch,int index)
{
  if(index >= strlen(str))
    return -1;
  if(str[index] == ch)
    return index+1;
  return first_occur(str,ch,index+1);
}

/* returns index of last occurrence of a character in a string and return -1 if character doesn't occur */
int last_occur(char str[],char ch,int index,int pos)
{
    if(index >= strlen(str))
      return pos;
    if(str[index] == ch)
      pos = index+1;
    return last_occur(str,ch,index+1,pos);
}
