#include <stdio.h>
int main()
{
int i,l,n,w,h;
scanf("%d%d",&l,&n);
for(i=0;i<n;i++)
{
scanf("%d%d",&w,&h);
if(w>=l&&h>=l)
{
if(w==h)
{
printf("\nACCEPTED");
}
else
{
printf("\nCROP IT");	
}
}
else if(w<l||h<l)
{
printf("\nUPLOAD ANOTHER");
}
}

return 0;
}
