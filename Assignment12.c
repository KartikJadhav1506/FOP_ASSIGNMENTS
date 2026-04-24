#include <stdio.h>

int GDC(int a,int b){
while(b!=0){
int temp=b;
b=a%b;
a=temp;
}
return a;
}

int SCD(int a,int b){
int min=(a<b)?a:b;

for(int i=2;i<=min;i++){
if (a%i==0&&b%i==0){
return i;
}
}
}

int main(){
int n1,n2;

printf("Enter two no. :");
scanf("%d%d",&n1,&n2);

int gdc=GDC(n1,n2);
int scd=SCD(n1,n2);

printf("SCD : %d\n",scd);
printf("GCD : %d\n",gdc);
}
