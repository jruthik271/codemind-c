#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);;
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(i=0;i<a;i++)
    {
        if(arr[i]%2==0 && arr[i+1]%2!=0 && arr[i-1]%2!=0)
        {
            count++;
        }
    }
    printf("%d",count);
}