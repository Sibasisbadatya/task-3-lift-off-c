#include<stdio.h>
int prime(int n,int i)
{
    if(i==1)
    return 1;
    if(n%1==0)
    return 0;
    return prime(n,n-1);

}
int main()
{
    int n,p;
    printf("enter any number");
    scanf("%d",&n);
    p=prime(n,n/2);
    if(p==1)
    printf("%d is a prime  number");
    else
    printf("%d is  not a prime number");
    return 0;
}