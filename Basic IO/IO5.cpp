#include <iostream>
using namespace std;
int main()
{
int i,l,n,w,h;
cin>>l>>n;
for(i=0;i<n;i++)
{
cin>>w>>h;
if(w>=l&&h>=l)
{
if(w==h)
{
cout<<"\nACCEPTED";
}
else
{
cout<<"\nCROP IT";	
}
}
else if(w<l||h<l)
{
cout<<"\nUPLOAD ANOTHER";
}
}

return 0;
}
