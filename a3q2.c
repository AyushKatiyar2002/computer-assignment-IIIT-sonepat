#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,d;
printf("enter the four values");
scanf("%f%f%f%f",&a,&b,&c,&d);
if(a>b)
{
if(a>c)
{
  if(a>d)
        printf("a is greatest");
        else
        printf("d is greatest");
}

else
{
    if(c>d)
        printf("c is greatest");
    else
        printf("d is greatest");
}

}
else
    {
if(b>c)
{
  if(b>d)
        printf("b is greatest");
        else
        printf("d is greatest");
}

else
{
    if(c>d)
        printf("c is greatest");
    else
        printf("d is greatest");
}





}
}



