#include<stdio.h>
int main()
{
  int n,a=0,b=0,c=1,next,i=1;
  printf("Enter the nubers of terms:");
  scanf("%d",&n);
  if(n<=0)
  {
  printf("Please enter a positive number./n");
}
else
{
   printf("Tribonacci Sequence:");
   while(i<=n)
   {
   if(i==1)
   printf("%d",a);
   else
    if (if= =2)
    printf("%d",b);
    else if(if==3)
    printf("%d",c);
    else
    {
	  next=a+b+c;
	  printf("%d",next);
	  a=b;
	  b=c;
	  c=next;
}
       i++;
       return 0;
   }
	
