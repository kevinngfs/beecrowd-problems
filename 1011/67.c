#include <stdio.h>

int main(){
double r, pi, total;
pi=3.14159;
scanf("%lf", &r);
total = ((4/3) * pi * (r * r *r));
printf("VOLUME = %.3lf\n", total);
    return 0;
}