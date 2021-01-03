#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int len,freq[26];
    printf("Enter any string: ");
    scanf("%s",str);
    len=strlen(str);
    for(int i=0; i<26; i++)
    {
        freq[i] = 0;
    }
    for(int i=0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            freq[str[i]-97]++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            freq[str[i]-65]++;
        }
    }
    printf("Frequency of characters in the given string: \n");
    for(int i=0; i<26; i++)
    {
        if(freq[i]!= 0)
        {
            printf("%c = %d \n", (i+97),freq[i]);
        }
    }



