#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void get_count(int count[],char str[],int n)
{
    for(int i=0;i<n;i++)
    {
        count[str[i] - 48]++;
    }
}
int main(void) {
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        char str[10000];
        scanf("%s",str);
        int count[10]={0};
        int n;
        n =strlen(str);
        get_count(count,str,n);
        int flag=0;
        for(int i=1;i<=9;i++)
        {
            for(int j=1;j<=count[i];j++)
            {
                printf("%d",i);
                flag++;
                if(flag == 1)
                {
                    for(int j=1;j<=count[0];j++)
                    printf("0");
                }
            }
         }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
