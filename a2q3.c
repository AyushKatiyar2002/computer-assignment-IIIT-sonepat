#include<stdio.h>
void main()
{
float a,b,c,d,e,f,area;
printf("enter a,b,c,d,e and f");
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
area=((a*(d-f))+(c*(f-b))+(e*(b-d)))/2;
if(area<0)
    area=-area;
printf("area= %f",area);


}
