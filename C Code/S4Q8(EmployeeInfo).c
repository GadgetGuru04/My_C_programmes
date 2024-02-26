#include<stdio.h>

struct personal{
    char name[20],doj[20];
    int salary;
    };

void main(){
    struct personal peo[5];

    for(int i=0;i<5;i++){
        printf("Enter the name of employee %d: ",i+1);
        scanf("%s",peo[i].name);

        printf("Enter the Date of Joining of employee %d: ",i+1);
        scanf("%s",peo[i].doj);

        printf("Enter the salary of employee %d: ",i+1);
        scanf("%d",&peo[i].salary);

        }

    printf("Completed gathering information...\n\n\n");

    for(int i=0;i<5;i++){

        printf("Employee: %d\n",i+1);

        printf("\tName: %s\n",peo[i].name);

        printf("\tDate of Joining: %s\n",peo[i].doj);

        printf("\tSalary: %d\n",peo[i].salary);

        printf("\n\n");

        }
    }
