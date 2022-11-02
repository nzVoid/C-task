#include<stdio.h>
#include<math.h>

int main(){
	float x;
	printf("Enter X: /n");
	scanf("%f", &x);
	float y;
	printf("Enter Y: /n");
	scanf("%f", &y);

	float out = (((pow(x,2)/pow(y,3))+(1/x))/((x/pow(y,2))-(1/y)+(1/x)))/((pow((x-y),2)+4*x*y)/(1+y*pow(x,-1)));
	
	printf("Out: %f",out);
}	

