#include <stdio.h>
int main()
{
  float basic,hra,da, tax,net;
  printf("Enter basic salary");
  scanf("%f",&basic);
  hra=0.10*basic;
  da =  0.05*basic;
  if(basic>=20000)
     tax=0.10*basic;
     else
     tax=0.07*basic;
     net=basic+hra+da-tax;
     printf("Net salary=%.2f",net);
     return 0;
 }
