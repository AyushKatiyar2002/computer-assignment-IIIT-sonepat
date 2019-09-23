#include<stdio.h>
void main()
{
    int i,ld;
    printf("last digit bw 5 and 8 \n");
    for(i=0;i<100;i++)
    {
     ld=i%10;
     if(ld>=5 && ld<=8)
        {
            printf("%d \n",i);
        }
    }
}


