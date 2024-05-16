#include <stdio.h>
int main() {
int number;
int sum = 0;
printf("Enter a five-digit number: ");
scanf("%d", &number);
if (number < 10000 || number > 99999) {
printf("Invalid input. Please enter a five-digit number.\n"); }
while (number > 0) {
sum += number % 10;
number /= 10; }
printf("The sum of the digits of the entered number is: %d\n", sum);
return 0; }
