#include<stdio.h>
int main()
{
    int a[]={1,2,2,2,2,3,3,3,4,5,6};
    int l=0,r=10;
    int n,m;
    scanf("%d",&n);
    while(l<=r)
    {
        m=(l+r)/2;
        if(n==a[m])
        {
            break;
        }
        if(n<a[m])
        {
            r=m-1;
        }

        else if(n>a[m])
        {
            l=m+1;
        }
    }
    while(m>=0)
    {
        if(a[m]==n)
           {
               m--;
           }
        else
        {
            m++;
            printf("\nlower bound=%d",m);
            break;s
        }
    }
    while(m<=10)
    {
        if(a[m]==n)
           {
               m++;
           }
        else
        {
            m--;
            printf("\nupper bound=%d",++m);
            return;
        }
    }
}
