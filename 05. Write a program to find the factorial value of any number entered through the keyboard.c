#include <stdio.h>
int main(){
int a, b = 1, num;
printf("Input the number : ");
scanf("%d", &num);
for(a = 1; a <= num; a++)
b = b * a;
printf("The Factorial of %d is: %d\n", num, b);
return 0; }
