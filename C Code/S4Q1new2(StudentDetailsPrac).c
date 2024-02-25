#include<stdio.h>

void main()
{
    int str[20][2],i,j;

    for (i=0;i<20;i++){

        for (j=0;j<1;j++){

            printf("Enter roll no. of %d students: ",i+1);
            scanf("%d",&str[i][j]);

            printf("Enter Marks: ");
            scanf("%d",&str[i][j]);
        }
    }

    return 0;
}
