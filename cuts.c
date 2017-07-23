#include<stdio.h>
int main()
{
    int m,n,p,q;
    scanf("%d",&q);
    while(0<q)
    {
    scanf("%d %d",&m,&n);
    p=m*n-1;
    printf("%d\n",p);
    q--;
    }
    return 0;
}
