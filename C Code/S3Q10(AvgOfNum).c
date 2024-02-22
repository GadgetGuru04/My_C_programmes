#include <stdio.h>

int main()
{
  int num,i=0,value;
  double avg,sum=0;

  printf("How Many Number You Want to Enter : ");
  scanf("%d",&num);

    while(i<num)
        {
          printf("Enter No.%d :",i+1);
          scanf("%d",&value);
          sum = sum + value;
          ++i;
        }

    printf("\nSum => %.2lf \n",sum);

    avg = sum / num;

    printf("\nAverage => %.2lf / %d = %.2lf \n",sum,num,avg);

    return 0;
}
