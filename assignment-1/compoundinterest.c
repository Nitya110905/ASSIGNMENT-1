#include<stdio.h>
void main()
{
	float principal,rate=5,time=5,amount,CI;
	printf("Enter your Principal");
	scanf("%f",&principal);
	amount=principal*(pow((1+rate/100),time));
	CI=amount-principal;
	printf("Your CI is %f",CI);
}
