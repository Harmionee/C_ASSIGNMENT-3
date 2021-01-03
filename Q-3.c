#include <stdio.h>
int main() 
{   int a[100][100];int b[100][100];int c[100][100];int n,m;
    int (*ptr1)[100][100],(*ptr2)[100][100],(*ptr3)[100][100];
    ptr1=&a;ptr2=&b;ptr3=&c;
    printf("Enter size of rows and column for A matrix(less than 100): ");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the element in %d,%d for A matrix: ",i,j);
            scanf("%d", ptr1[i][j]);
        }
    }
    printf("Enter size of rows and coloumn for B matrix(less than 100): ");
    scanf("%d", &m);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the element in %d,%d for B matrix: ",i,j);
            scanf("%d", ptr2[i][j]);
        }
    }
    if(n==m)
    {        for(int i=0;i<m;i++)    {
        for(int j=0;j<n;j++)
        {
            (*ptr3[i][j])=(*ptr1[i][j])+(*ptr2[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {        for(int j=0;j<n;j++)
        {            printf("%d",*ptr3[i][j]);        }
    printf("\n");
    }
    }
    return 0;
}


