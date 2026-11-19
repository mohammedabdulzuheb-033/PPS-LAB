#include <stdio.h>
int main() 
{
   int a,b, temp;
     
   printf("enter two number(a and b):");
   scanf("%d %d", &a , &b);
   // swapping process
   temp = a;
   a = b;
   b = temp;
   
   printf("after sawpping: a= %d, b =%d\n", a, b);
 return 0;
 }
