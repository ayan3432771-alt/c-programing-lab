/*w.c.p to take a input an arrays an display into the screen*/
#include<stdio.h>
int main()
{
	printf("enter the size of the number:");
	scanf("%d",&n);
   int a[n],i;
   
   for (i=0; i< n; i++) {
    printf("Enter value:");
    scanf("%d",&a[i]);
}
     for (i=0;i<n;i++){
	 printf("%d",a[i]);
}
    return 0;
}
    
   

 
 
