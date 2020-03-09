#include <stdio.h>

int main(){
	char name[256];
	double salary, bonus;

	scanf("%s %lf %lf",name,&salary,&bonus);
	printf("TOTAL = R$ %.2f\n",salary+bonus*.15);

	return 0;
}