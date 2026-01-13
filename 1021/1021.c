#include <stdio.h>
#include <math.h>

int main(){
	double i;
	int cem, cinq, vinte, dez, cinco, dois, um;
	int c50, c25, c10, c05, c01;

	scanf("%lf", &i);

	cem = i / 100;
	i = fmod(i, 100);

	cinq = i / 50;
	i = fmod(i, 50);

	vinte = i / 20;
	i = fmod(i, 20);

	dez = i / 10;
	i = fmod(i, 10);

	cinco = i / 5;
	i = fmod(i, 5);

	dois = i / 2;
	i = fmod(i, 2);

	i = i * 100;

	um = i / 100;
	i = fmod(i, 100);

	c50 = i / 50;
	i = fmod(i, 50);

	c25 = i / 25;
	i = fmod(i, 25);

	c10 = i / 10;
	i = fmod(i, 10);

	c05 = i / 5;
	i = fmod(i, 5);

	c01 = i / 1;
	i = fmod(i, 1);

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", cem);
	printf("%d nota(s) de R$ 50.00\n", cinq);
	printf("%d nota(s) de R$ 20.00\n", vinte);
	printf("%d nota(s) de R$ 10.00\n", dez);
	printf("%d nota(s) de R$ 5.00\n", cinco);
	printf("%d nota(s) de R$ 2.00\n", dois);

	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", um);
	printf("%d moeda(s) de R$ 0.50\n", c50);
	printf("%d moeda(s) de R$ 0.25\n", c25);
	printf("%d moeda(s) de R$ 0.10\n", c10);
	printf("%d moeda(s) de R$ 0.05\n", c05);
	printf("%d moeda(s) de R$ 0.01\n", c01);

	return 0;
}
