#include <stdio.h>

int main(){
	int num,hours;
	double price;
	scanf("%d %d %lf",&num,&hours,&price);
	printf("NUMBER = %d\nSALARY = U$ %.2f\n",num,price*hours);
	return 0;
}