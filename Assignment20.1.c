#include <stdio.h>

void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}


int main(){
	int x,y;

	printf("Enter two no. : ");
	scanf("%d%d",&x,&y);
	
	printf("Before swapping x = %d and y = %d\n",x,y);
	swap(&x,&y);
	
	printf("After swapping x = %d and y = %d\n",x,y);
	
	return 0;
}
