#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;

printf("Enter how many random numbers you want: ");
scanf("%d", &n);

    
srand(1);

printf("Pseudo Random Numbers:\n");

for(i = 0; i < n; i++) {
   printf("%d\n", rand());
    }

    return 0;
}
