#include<stdio.h>
int main()
{
    int n,max,min,temp;
    int arry[n];
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        printf("enter the value \n");
        scanf("%d",&arry[i]);
    }
    max=arry[0];
    min=arry[0];
    for(int i=0 ; i<n ; i++)
    {
        if(max<arry[i])
        {
            max=arry[i];
        }
        if(min>arry[i])
        {
            min=arry[i];
        }
    }
    printf("max=%d min=%d", max,min);
    return 0;
}