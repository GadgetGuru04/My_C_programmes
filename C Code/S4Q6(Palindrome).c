#include<stdio.h>
#include<string.h>

void main()
{
    char a[10];
    int i,j,len;
    printf("Enter the string: \n");

    gets(a);
    len = strlen(a);

    j = len-1;

    for(i+0; a[i]!='\0';i++)
    {
        if (a[i]!=a[j]){
            printf("String is not a Palindrome.");

        }
         printf("String is a Palindrome.");
    }
}
