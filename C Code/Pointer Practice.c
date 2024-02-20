# include <stdio.h>
# include <conio.h>

int main(){
    int i = 10;
    int p;

    p = &i;

    printf("Value of var i is %d \n",i);
    printf("Adress of var i is %u \n",&i);
    printf("Value of var p is %d \n",&p);
    printf("Value of var p is %d \n",i);
    printf("Value of var i is %d \n",i);

}
