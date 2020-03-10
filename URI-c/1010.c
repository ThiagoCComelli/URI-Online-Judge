#include <stdio.h>

int main(){
	int a,b;
	double tot,c;
	for (int i = 0; i < 2; i++)
	{
		scanf("%d %d %lf",&a,&b,&c);
		tot += b*c;
	}
	printf("VALOR A PAGAR: R$ %.2f\n",tot);
	return 0;
}