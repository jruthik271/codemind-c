#include<stdio.h>
int main(){
    int h,m,s,n;
    scanf("%d",&n);
    h=n/3600;
    m=(n%3600)/60;
    s=n%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}