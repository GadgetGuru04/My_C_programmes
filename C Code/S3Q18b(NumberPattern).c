#include<stdio.h>
 void main(){

     int n=0;
     for(int i=5; i>=1; i--){

        for(int j=0; j<=n; j++)
            printf(" ");

        for(int j=1; j<=i; j++)
            printf("%d ",j);

        printf("\n");
        n++;
     }
}
