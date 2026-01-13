#include <stdio.h>

int main(){
int t, seg, min, hr;
scanf("%d", &t);
hr = t/3600;
t %= 3600;
min = t/60;
t %= 60;
seg = t/1;
t %= 1;
printf("%d:%d:%d\n", hr, min, seg);


    return 0;
}