#include <stdio.h>

int main() {
    int num, og, rem;
    int sum = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    og = num;

    
    while (num != 0) {
        rem = num % 10;        
        sum += rem * rem * rem;  
        num /= 10;                   
    }

    
    if (sum == og)
        printf("%d is an Armstrong number.\n", og);
    else
        printf("%d is not an Armstrong number.\n", og);

    return 0;
}

