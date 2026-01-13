#include <stdio.h>

int main(){
    int h, vm;
    float d, l;
    scanf("%d %d", &h, &vm);
    d = h * vm;
    l = d/12;
    printf("%.3f\n", l);

    return 0;
}