#include <iostream>
#include<string>
using namespace std;
int main()
{
	string c,a;
	char temp;
	int i,j,flag=0;
	cin>>a;
	
	j=a.length()-1;
	for(i=0;i<=j;i++){
		c[i]=a[i];
	}
   for(i=0;i<a.length()/2;i++)
   {
    
	  temp=a[i];
      a[i]=a[j];
      a[j--]=temp;
   }
   
   for(i=0;i<=j;i++){
   	if(a[i]==c[i])
   	{
   		flag=1;
	   }else{
	   	flag=0;
	   }
   }

	if(flag){
    cout<<"YES";
	}else{
	cout<<"NO";
	}
    return 0;
}

