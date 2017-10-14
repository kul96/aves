#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    int tc;
    scanf("%d",&tc);
    char ch = getchar();
    while(tc--)
    {
        char str[1001];
        fgets(str,1001,stdin);
        int n=strlen(str);
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(flag)
            {
                if(str[i] != ' ')
                {
                    flag=0;
                    str[i] = toupper(str[i]);
                }
            }
            if(i==0)
                str[i] = toupper(str[i]);
            if(str[i] == ' ')
            {
                flag=1;
            }

        }
        printf("%s\n",str);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
