#include <stdio.h>
#include <string.h>

int main() {
    char x,y;
    printf("Enter one string : ");
    scanf("%s",x);
    printf("Enter other string : ");
    scanf("%s",y);
    int r=strcmp(x,y);
    if(r==0)
    {
    printf("The strings are same \n");
    }
    else {
    printf("The strings are not the same \n");
    }
    return 0;
}


