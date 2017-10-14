#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int tc;
    scanf("%d",&tc);
    char c;
    c=getchar();
    while(tc--)
    {
        char str[1002];
        int count[26]={0};
        fgets(str,1001,stdin);
       // printf("%s",str);

       for(int i=0;i<strlen(str);i++)
        {
            count[str[i]-65]++;
        }

        count[0] = count[4];//E
        count[3] = count[22];//W
        count[1] = count[13];//N
        count[2] = count[18];//S
        if(count[0] != count[3])
        {
            char ch='E';
            int diff=count[0]-count[3];
            if(diff < 0)
            {
                diff = diff * (-1);
                count[0] = 0;
                count[3] = diff;
            }
            else
            {
                count[0] = diff;
                count[3] = 0;
            }
        }
        else{
            count[0] = count[3]=0;
        }
        if(count[1] != count[2])
        {
            char ch='N';
            int diff=count[1]-count[2];
            if(diff < 0)
            {
                diff = diff * (-1);
                count[1] = 0;
                count[2]=diff;
            }
            else
            {
                count[1]=diff;
                count[2]=0;
            }
        }
        else{
            count[1] = count[2]=0;
        }
        char s[] ="ENSW";
        for(int i=0;i<4;i++)
        {
            for(int j=1;j<=count[i];j++)
                printf("%c",s[i]);
        }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
