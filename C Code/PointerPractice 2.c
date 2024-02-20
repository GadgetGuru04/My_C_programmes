#include <stdio.h>

int main() {

    int a,*p;

    *p = &a;
    printf("%d",p);
    printf("%d",a);
    printf("%d",*p);
    printf("%d",&a);
    printf("%d",*&p);

    return 0;
}
