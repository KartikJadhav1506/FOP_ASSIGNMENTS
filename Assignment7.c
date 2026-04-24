#include <stdio.h>

int main(){

int x,y,z,total,roll;
float avg;
char name[30];

printf("Enter Name:\n ");
scanf("%s", name);

printf("Roll no.\n ");
scanf("%d",&roll);

printf("Marks in 3 subjects:\n ");
scanf("%d%d%d",&x,&y,&z);

int marks[3];
marks[0]=x;
marks[1]=y;
marks[2]=z;

total=x+y+z;
avg=total/3;


printf("Your name : %s\n", name);
printf("Roll no :%d\n",roll);
printf("Total Marks :%d\n",total);
printf("Percentage : %f",avg);


} 
