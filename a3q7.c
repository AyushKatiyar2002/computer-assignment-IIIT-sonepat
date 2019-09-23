#include<stdio.h>
#include<math.h>

void main()
{
float a,b,c,d,det,r1,r2,r,c1,c2,e;
d=(b*b)-(4*a*c);
if(d>0)
{
    printf("roots are real and distinct");
    det=sqrt(d);
    r1=(-b+det)/(2*a);
    r2=(-b-det)/(2*a);
    printf("roots are %f and %f",r1,r2);

}
else if(d==0)
{

    det=sqrt(d);
    r=(-b)/(2*a);
    printf("roots are real and equal it is %f",r);
}
else
{
    e=-d;
    det=sqrt(e);
    r1=-b/(2*a);
    c1=-det/(2*a);
    c2=det/(2*a);
    printf("roots are %f+i(%f) and %f+i(%f)",r1,c1,r1,c2);

}
