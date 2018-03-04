#include <stdio.h>
#include<string.h>
int main()
{
    char s[1000][1000],s1[1000][1000],a[5]={'a','e','i','o','u'};
    int i,j,k=0,b[5],l;
    while(scanf("%s",s[k])==1)
    {
        k++;
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<strlen(s[i]);j++)
        {
            s1[i][j]=tolower(s[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        int count=0;
        for(j=0;j<k;j++)
        {
            for(l=0;l<strlen(s[j]);l++)
            {
                if(a[i]==s1[j][l])
                {
                    count+=1;
                }
            }
        }
        b[i]=count;
    }
    for(i=0;i<5;i++)
    {
        if(b[i]!=0)
        {
        printf("%c ->%d\n",a[i],b[i]);
        }
    }
}
