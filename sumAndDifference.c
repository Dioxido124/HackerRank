#include<stdio.h>

int main(){

    int a,b, sum1, dif1;
    float y,z, sum2, dif2;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &y, &z);

    sum1 = a+b;
    dif1 = a-b;

    sum2 = y+z;
    dif2 = y-z;

    printf("%d %d\n", sum1, dif1);
    printf("%.1f %.1f", sum2, dif2);

    return 0;
}