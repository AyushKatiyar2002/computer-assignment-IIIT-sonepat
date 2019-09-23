#include<stdio.h>
#include<math.h>
void main()
{

    float p,q,r,a,b,c,dist,base,area;
    printf("enter the required values \n");
    scanf("%f%f%f%f%f%f",&p,&q,&r,&a,&b,&c);

    dist=((p*a)+(q*b)+c)/sqrt((a*a)+(b*b));
    base=2*(sqrt((r*r)-(dist*dist)));
    if (dist>=r)
        printf(" no intersection or intersection at one point");
    else
    {

        area=(base*dist)/2.0;
        printf("area =%f",area);


    }









}
