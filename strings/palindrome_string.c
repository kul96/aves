#include<stdio.h>
#include<string.h>
int IsPalindrome(char *);
int main(void)
{
  char ch;
  char str[101];
  scanf("%s",str);
  if(IsPalindrome(str))
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }
  return 0;
}

int IsPalindrome(char str[])
{
  int n=strlen(str);
  int i,j;
  /* compairing first half with second */
  for(i=0,j=n-1;i<=j;i++,j--)
  {
    if(str[i] != str[j])
      return 0;
  }
  return 1;
}
