/* write a recursive function to return the index of first and last occurrence of a character in a string */
#include<stdio.h>
#include<string.h>
void reverse(char *,int,int);
int main(void)
{
  char ch;
  char str[101];
	fgets(str, 100,stdin);
	reverse(str,0,strlen(str)-1);
  printf("%s",str);
  return 0;
}

void reverse(char str[],int i,int n)
{
    if(n < i)
      return;
    char tmp = str[i];
    str[i] = str[n];
    str[n] = tmp;
    reverse(str,i+1,n-1);
}
