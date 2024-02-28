#include<stdio.h>

int raise(int ,int);

void main(){

    int x,y,r;

    printf("Enter the base: ");
    scanf("%d",&x);

    printf("Enter the power: ");
    scanf("%d",&y);

    r=raise(x,y);
    printf("%d^%d=%d",x,y,r);
    }

int raise(int x,int y){
    int res=1;

    for(int i=1;i<=y;i++){
        res*=x;
    }
    return res;
}
