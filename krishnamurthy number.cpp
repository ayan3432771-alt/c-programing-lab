#include<stdio.h>
int main()
{
  int n,rem,fact, sum=0 ,i;
  printf("Enter a number:");
  scanf("%d",n);
  i=1;
  while(n<0)
  {
  rem=n%10;
  fact=1;
  for(i=1;i<=rem;i++)
  fact=fact*i;
  sum=sum+fact;
  n=n/10;
}
   if (sum== temp)
      printf("%d is a krishnamurty number./n",temp);
      printf("%d is a not krishnamurty number./n",temp);
      return 0;
  }
  
