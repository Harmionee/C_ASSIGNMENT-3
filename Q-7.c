#include <string.h>
#include <stdio.h>

int main()
{
    char s[100],temp=1,c='*';  
    int  i,j,k=0,n;
    printf("Enter  the string : ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
    	if(!(s[i]==c))
    	{
    		for(j=i+1;s[j];j++)
            {
            	if(s[i]==s[j])
            	   s[j]=c;
            }
		}
    }
    for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];
     	if(s[i]==c)
     	{
		  k++;
		  i--;
	    }
    }
    printf("String after removing all duplicates : ");
 	 printf("%s",s);
    return 0;
}



