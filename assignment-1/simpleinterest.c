#include<stdio.h>
void main()
{
	float p,r=5,t,SI;
	printf("Enter your principal");
	scanf("%f",&p);
	printf("Enter your time");
	scanf("%f",&t);
	SI=p*r*t/100;
	printf("Your SI is %f",SI);
}
