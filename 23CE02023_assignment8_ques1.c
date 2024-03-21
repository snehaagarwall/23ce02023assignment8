#include <stdio.h>

void circular_shift(int *x, int *y, int *z) {
    int temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}

int main() {
    int a, b, c ;
    printf("enter a,b,c");
    scanf("%d %d %d",&a,&b,&c);
     printf("Before circular shift: a=%d, b=%d, c=%d\n", a, b, c);
 circular_shift(&a, &b, &c);

    printf("After circular shift: a=%d, b=%d, c=%d\n", a, b, c);

    return 0;
}