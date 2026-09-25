/*w.c.p to find sum of the flowwing sseries 1!+3!+5!+.... upto numbers*/
//1!=1
//3!=3*2*1=6
//5!=5*4*3*2*1=120
//upto n!

#include<stdio.h>
int main()
{
int i=1,c=1,a=1,n;
   long int fact, sum=0;
   printf("enter the  no of trems");
   scanf("%d,&n");
   while(c<=n){
   i=1;
   fact=1;
   while(i<=a){
   fact=fact*i;
   i++;
}
sum=sum+fact;
c++;
a=a+2;
}
return 0;
}
   
    
