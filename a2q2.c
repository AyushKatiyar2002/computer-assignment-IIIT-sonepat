#include<stdio.h>
#include<math.h>

void main()
{
float a,b,c,d,dis;
printf("enter a,b,c,d");
scanf("%f%f%f%f",&a,&b,&c,&d);
dis=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));




printf("distance is %f",dis);


}
