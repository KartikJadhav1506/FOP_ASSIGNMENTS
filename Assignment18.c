#include <stdio.h>
#include <string.h>

int main(){

char str[30];
char str1[30];
int len;

	printf("Enter a string :");
	scanf("%s",str);
	printf("Enter a another string for equality check :");
	scanf("%s",str1);

	len = strlen(str);
	printf("Length of string is %d\n",len);

	int i;
	char reverse[30];
	printf("Reverse of the string \"%s\" is ",str);

	for(i=len-1;i>=0;i--){
		printf("%c",str[i]);
		}
		printf("\n");

	int cmp;
	cmp = strcmp(str,str1);

	if(cmp==0){
		printf("Strings are Equal\n");
	}
	else{
		printf("strings are not equal\n");
	}

	int flag=0;
	
	for(i=0;i<len/2;i++){
		if(str[i] != str[len-i-1]){
			flag=1;
			break;
		}
		else{
		flag=0;
		}
	}
	
	if(flag==1){
	printf("String is not a pallindrome\n");
	}
	else{
	printf("String is a pallimdrome\n");
	}

	
	
	
	
	
	
}
