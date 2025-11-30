//Q56: Read and print elements of a one-dimensional array.
#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arry[n];
    for(int i=0 ; i<n ; i++)
    {
        printf("enter the value");
        scanf("%d",&arry[i]);
    }
    for(int i=0 ; i<n ; i++)
    {
        printf("%d",arry[i]);
    }
    return 0;
}