/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/
#include <stdio.h>
int main() {
int a,b;
for (a = 1; a <= 5; a++) {
for (int b = a; b >=1; b--) {
printf(" %d ", b); }
printf("\n"); }
return 0; }
