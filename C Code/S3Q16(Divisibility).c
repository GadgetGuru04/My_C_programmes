#include<stdio.h>
#include<conio.h>

void main()
{
int i, sum=0;

printf("Numbers greater than 100 and less than 200 which is divisible by 5 : \n");

for(i=101;i<200;i++)
     {
    if(i%5==0)
          {
               printf("%d, ",i);
              sum += i;
          }
     }

printf("\n sum = %d",sum);
}
