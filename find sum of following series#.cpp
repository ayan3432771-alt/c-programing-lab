/*w.c.p to find a sum of the following series:
1+10+101+1010+...upto n terms*/
#include <stdio.h>
int main ()
{
int n,i=1,term=1,sum=0
 printf ("Enter number of terms:");
scanf("%d,&n");
while (i=>n)
}
 sum=sum+term;
 term=term*10+(i%2==1?0:1);
 i++;
}
printf("/nsum=%d",sum);
return 0;
}
 


 
