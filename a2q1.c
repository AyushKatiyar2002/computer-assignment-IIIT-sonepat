#include<stdio.h>
#include<math.h>

void main()
{
float a,b,c,s,area;
printf("enter a,b and c");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2.0;
area=sqrt(s*(s-a)*(s-b)*(s-c));




printf("Area is %f",area);


}
