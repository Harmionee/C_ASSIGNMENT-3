#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1,*ptr2,*ptr3,n1,n2,n3;
    printf("Enter no. of elements for malloc : ");
    scanf("%d",&n1);
    
    ptr1=(int*)malloc(n1*sizeof(int));
    if(ptr1==NULL)
    {printf("Memory not allocated\n");}
    else {printf("Memory successfully allocated using malloc\n\n");}
    
    printf("Enter no. of elements for calloc : ");
    scanf("%d",&n1);
    ptr2=(int*)calloc(n2,sizeof(int));
    if(ptr2==NULL)
    {printf("Memory not allocated\n");}
    else {printf("Memory successfully allocated using calloc\n\n");}
    
    free(ptr1); 
    printf("Malloc Memory successfully freed.\n");
    free(ptr2); 
    printf("Calloc Memory successfully freed.\n\n");
    
    printf("Enter new size for allocation : ");
    scanf("%d",&n3);
    ptr3=realloc(ptr2,n3*sizeof(int));
    printf("Memory successfully re-allocated using realloc.\n");
    return 0;
}


