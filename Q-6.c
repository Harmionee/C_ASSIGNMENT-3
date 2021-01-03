#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int l1,l2;char a[100],b[100];
    char *x,*y,*z;
    x=a;y=b;
    printf("Enter 2 strings : ");
    scanf("%s %s",x,y);
    l1=strlen(a);l2=strlen(b);
    int l3=l1+l2;
    char c[l3];
    z=c;
    for(int i=0;i<=l1;i++)
    {
        z[i]=(x[i]);
    }
    for(int i=l3-l1;i<=l3;i++)
    {
        z[i]=(y[i-l2]);
    }
    printf("Concatenated string : %s\n",c);
    return 0;
}



