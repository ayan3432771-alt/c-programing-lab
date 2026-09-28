//2+5+8+11+14..upto n terms.w.c.p to calculate sum of the given series.
#include<stdio.h>

int main()
{
 int n,i=1,term=2,sum=0;
 printf("Enter the numbers of term:");
 scanf("%d,&n");
 while(i<=n)
 {
 sum+=i;
 i+=3;
}
printf("the sum is: %d",sum);
return 0;
}
