# include<stdio.h>

void main()
{
    double A,B,C;

    printf("Please enter your first number : ");
    scanf("%lf",&A);

    printf("Please enter your second number : ");
    scanf("%lf",&B);

    printf("Please enter your third number : ");
    scanf("%lf",&C);

    if (A > B)
    {
        if (B > C)
        {
            printf("The Maximum of these three numbers is : %lf",A);
        }
        else (B < C)
        {
            printf("The Maximum of these three numbers is : %lf",C);
        }

    }else{
        printf("The Maximum of these three numbers is : %lf",B);
    }

    return 0;

}
