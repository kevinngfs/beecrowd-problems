#include <stdio.h>

int main(){
    int i, dia, mes, ano;
    scanf("%d", &i);
    ano = i/365;
    i %= 365;
    mes = i/30;
    i %= 30;
    dia = i/1;
    i %= 1;
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);

    return 0;
}