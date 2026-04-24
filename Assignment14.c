#include <stdio.h>
#include <math.h>
int main(){

int n,remainder=0,decimal=0,i=0;

printf("Enter a binary no. : ");
scanf("%d",&n);

while(n!=0){
remainder = n % 10 ;
decimal += remainder * pow(2,i);
n=n/10;
i++;
}
printf("decimal conversion is %d\n",decimal);
}
