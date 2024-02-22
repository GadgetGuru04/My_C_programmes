#include<stdio.h>

int main()
{
    int n1,n2,n3,i,num;
    n1=0;
    n2=1;

    printf("Enter the number of elements:");
    scanf("%d",&num);

    printf(" %d \n %d ",n1,n2);

    for(i=2;i<num;++i)
    {
        n3 = n2;
        n2 = n2 + n1;
        n1 = n3;
        printf("\n %d",n2);
    }
    return 0;
 }
