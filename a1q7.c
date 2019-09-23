#include<stdio.h>
void main()
{
int a,b;
printf("enter a");
scanf("%d",&a);
b=a%10;
b=b*2;
a=((a/10)*10)+b;



printf("new no. is is %d",a);


}
