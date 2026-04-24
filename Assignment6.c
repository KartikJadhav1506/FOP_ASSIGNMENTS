#include <stdio.h>
int main(){
int n,i,fact=1;


printf("Enter a no. ");
scanf("%d",&n);

if(n<0){
printf("Factorial not defined for negative no.");
}
else{
for(i=1;i<=n;i++){
fact=fact*i;
}
printf("Factorial of %d = %d",n,fact);
}
}



