#include <stdio.h>
int main() {
int num, a, b, start, end;
printf("Input starting number: ");
scanf("%d", &start);
printf("Input the ending number: ");
scanf("%d", &end);
printf("The prime numbers between %d and %d are: \n", start, end);
for (num = start; num <= end; num++) {
b = 0;
for (a = 2; a <= num / 2; a++) {
if (num % a == 0) {
b++;
break; } }
if (b == 0 && num != 1)
printf("%d ", num); }
printf("\n");
return 0; }
