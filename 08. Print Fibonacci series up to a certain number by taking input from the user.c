#include <stdio.h>
int main() {
int a, num;
int b1 = 0, b2 = 1;
int next = b1 + b2;
printf("Enter the number of terms: ");
scanf("%d", &num);
printf("Fibonacci Series: %d, %d, ", b1, b2);
for (a = 3; a <= num; ++a) {
printf("%d, ", next);
b1 = b2;
b2 = next;
next = b1 + b2;}
return 0; }
