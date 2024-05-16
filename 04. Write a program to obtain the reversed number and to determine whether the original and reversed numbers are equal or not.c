#include <stdio.h>
int main( ) {
int number, reverse=0, remainder, num;
printf("Enter a 5 digit number: ");
scanf("%d", &number);
if (number < 10000 || number > 99999) {
printf("Invalid input. Please enter a five-digit number.\n"); }
num=number;
while (num>0) {
remainder=num%10;
reverse=reverse*10+remainder;
num=num/10;}
printf("Reverse number is %d \n", reverse);
if(number == reverse)
printf("Reverse number is equal to actual number.\n");
else
printf("Reverse number is not equal to actual number.\n");
return 0; }
