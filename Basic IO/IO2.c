#include <stdio.h>
int main()
{
int n,a;
long long int x=1;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a);
x=(x*a)%(1000000007);
}


printf("%lli",x);
return 0;
}
