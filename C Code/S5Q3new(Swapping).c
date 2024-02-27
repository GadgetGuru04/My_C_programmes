#include<stdio.h>
#include<string.h>

void main()
{
    int x,y,*a,*b;
    printf("Enter first value: ");
    scanf("%d",&x);

    printf("Enter second value: ");
    scanf("%d",&y);

    a = &x;
    b = &y;
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

    printf("The new first value after swapping : %d. \n" ,*a);
    printf("The new second value after swapping : %d. " ,*b);

}
