#include <stdio.h>
int main()
{
  float length,breadth,area;
  printf("enter the length of rectangle:");
  scanf("%f",& length);
  printf("enter the breadth of rectangle:");
  scanf("%f",& breadth);
  area = length * breadth;
  printf("the area of the rectangle is :%f\n",area);
   return 0;
 }
