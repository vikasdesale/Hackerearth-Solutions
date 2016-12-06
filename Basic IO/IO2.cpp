#include<iostream>

using namespace std;

int main()
{
int n,a;
long long int x=1;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a;
x=(x*a)%(1000000007);
}
cout<<x;
return 0;
}
