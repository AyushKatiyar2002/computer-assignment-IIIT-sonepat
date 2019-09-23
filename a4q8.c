#include<stdio.h>
void main()
{
    int i;
    printf("no. multiple of 3 or 5 but not both \n");
    for(i=1;i<70;i++)
    {
        if(i%3==0 || i%5==0)
        {
            if(i%15!=0)
            printf("%d \n",i);
        }
    }
}

