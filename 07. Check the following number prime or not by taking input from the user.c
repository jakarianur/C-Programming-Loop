#include <stdio.h>
int main() {
int a, num, prime;
prime = 1;
printf("Enter any number to check prime or not: ");
scanf("%d", &num);
for(a=2; a<=num/2; a++) {
if(num%a==0) {
prime = 0;
break; } }
if(prime == 1 && num > 1) {
printf("\n%d is prime number", num); }
else {
printf("\n%d is composite number", num); }
return 0; }
