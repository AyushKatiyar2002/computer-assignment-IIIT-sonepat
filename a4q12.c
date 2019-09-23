#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<10;i=i+2)
    {

        for(j=(i*10);j<(i*10)+10;j++)
            printf("%d\t",j);
        printf("\n");



    }



}
