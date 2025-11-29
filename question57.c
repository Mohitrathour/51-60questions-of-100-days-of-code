#include<stdio.h>
int main()
{
    int n,m=0;
    int arry[n];
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        printf("enter the value \n");
        scanf("%d",&arry[i]);
    }
    for(int i=0 ; i<n ; i++)
    {
        m=m+arry[i];
    }
    printf("sum of array %d",m);
    return 0;
}