#include <stdio.h>
#include <math.h>

int main(){
int num, i, fact = 1, isPrime = 1, temp;

printf("Enter a number: ");
scanf("%d", &num);

printf("Square = %d\n", num * num);
printf("Cube = %d\n", num * num * num);
   
if (num <= 1)
isPrime = 0;
else {
for (i = 2; i <= num / 2; i++) {
if (num % i == 0) {
isPrime = 0;
break;
    }}}

if (isPrime)
printf("The number is Prime\n");
else
printf("The number is Not Prime\n");


for (i = 1; i <= num; i++) {
fact = fact * i;
}
printf("Factorial = %d\n", fact);

  
printf("Prime factors: ");
temp = num;
for (i = 2; i <= temp; i++) {
while (temp % i == 0) {
printf("%d ", i);
temp = temp / i;
        }}



float guess, epsilon = 0.0001;


guess = num / 2.0;

while ((guess * guess - num) > epsilon || (num - guess * guess) > epsilon) {
        guess = (guess + num / guess) / 2.0;
}

printf("Square root of %d = %.4f\n", num, guess);

return 0;
}



















