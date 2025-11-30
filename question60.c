//Q60: Count positive, negative, and zero elements in an array.
#include<stdio.h>
int main()
{
    int n,po=0,ne=0,ze=0;
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
        if (arry[i]>1)
        {
            po=po+1;
        }
        else if (arry[i]<0)
        {
            ne=ne+1;
        }
        else
        {
            ze=ze+1;
        }
        
    }    
    printf("no of positive no %d\n",po);
    printf("no of negative no %d\n",ne);
    printf("no of zeros %d\n",ze);
    return 0;
}