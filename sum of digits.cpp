//w.c.p to calculate the sum of digits
#include <stdio.h>
int main()
{
	int n, digit=0,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	 while (n>0)
	 {
	   digit=n%10;
	   n/=10;
	   sum=sum+digit;
}
     printf("sum of digits=%d",sum);
     return 0;
 }
