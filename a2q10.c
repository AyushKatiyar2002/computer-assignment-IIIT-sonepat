#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,z,ang,deg;
printf("enter a,b and c");
scanf("%f%f%f",&a,&b,&c);

z=(-(a*a)+(b*b)+(c*c))/(2*b*c);

ang=acos(z);
deg=(ang*(180))/3.14;


printf("the  angle is degree %f and in radian is %f",deg,ang);

}
