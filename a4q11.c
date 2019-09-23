#include<stdio.h>
void main()
{
    int i,ld,fd;
    printf("sum of digits is a multiple of 7 \n");
    for(i=0;i<100;i++)
    {
     ld=i%10;
     fd=i/10;
     if((ld+fd)%7==0)
        {
            printf("%d \n",i);
        }
    }
}



