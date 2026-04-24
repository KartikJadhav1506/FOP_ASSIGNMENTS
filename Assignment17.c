#include <stdio.h>
#include <math.h>

int main(){
	
	float x,sum=0,term;
	int i,n,sign=1;

	printf("Enter value of x(in radians) : ");
	scanf("%f",&x);

	printf("Enter  no. of terms : ");
	scanf("%d",&n);

	term=x;	

	for(i=1;i<=n;i++){
		sum = sum + term * sign;
		term = term*x*x/((2*i)*(2*i+1));
		sign=-sign;
	}
	
	printf("Sum of sin series = %f\n",sum);
	return 0;
}
