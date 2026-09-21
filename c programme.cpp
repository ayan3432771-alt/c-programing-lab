// write a c programme to calculate area and perimeter of rectangle
#include<stdio.h>
int main()
{
    float l,b,area,peri;
    printf("Enter the length of a rectangle:");
    scanf("%f",&l);
    printf("Enter the breadth of a rectangle:");
     scanf("%f",&b);
     area=l*b;
     peri=2*(l+b);
     printf("/n area of the rectangle=%.3f",area);
     printf("/n perimeter of  the rectangle=%.2f",peri);
     return 0;
 }
