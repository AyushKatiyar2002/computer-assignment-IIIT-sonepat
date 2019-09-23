#include<stdio.h>
void main()
{
    int i,fd;
    printf("leaves remainder 1 when first digit is divided by 3 \n");
    for(i=0;i<100;i++)
    {

     fd=i/10;
     if((fd)%3==1)
        {
            printf("%d \n",i);
        }
    }
}



