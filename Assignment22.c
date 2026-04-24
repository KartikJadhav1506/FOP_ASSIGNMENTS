#include <stdio.h>
#include <string.h>

int main(){

int n,len;
char first[30];
char second[30];


printf("Enter First String :");
scanf("%s",first);
len=strlen(first);

printf("Enter Second String :");
scanf("%s",second);

printf("1:Length of both the strings\n2:Copy first string to second\n3:Concatenate both the strings\n4:Compare the 2 strings\n5:Reverse of string\n");
printf("Enter Your Choice : ");
scanf("%d",&n);

switch (n) {
	case 1:
		printf("%zu\n", strlen(first));
		printf("%zu\n", strlen(second));
		break;
	case 2:
		strcpy(second,first);
		printf("Second string : %s\n",second);
		break;
	case 3:
		strcat(first,second);
		printf("Concatenated string : %s\n",first);
		break;
	case 4:
		int cmp;
		cmp = strcmp(first,second);
		if(cmp == 0){
		printf("The strings you entered are same\n");
		}
		else{
		printf("The stings are not equal\n");
		}
		break;
	case 5:
	        int i;
	        printf("Reverse of the string \"%s\" is ",first);
                for(i=len-1;i>=0;i--){
	            printf("%c",first[i]);
                }
                printf("\n");
	}
}
