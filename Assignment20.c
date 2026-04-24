#include <stdio.h>

int main(){

int a,b,c;

printf("Enter 2 no. a and b : ");
scanf("%d%d",&a,&b);

c=a;
a=b;
b=c;

printf("After swapping without pointers\n");
printf("a=%d b=%d",a,b);
}
