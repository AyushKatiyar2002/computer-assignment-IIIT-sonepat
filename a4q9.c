#include<stdio.h>
void main()
{
    int i,ld;
    printf("last digit multiple of 3 \n");
    for(i=0;i<100;i++)
    {
     ld=i%10;
     if(ld%3==0)
        {
            printf("%d \n",i);
        }
    }
}

