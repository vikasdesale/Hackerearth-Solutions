#include<iostream>
using namespace std;
int main(){
	
	int i;
	string a;

	cin>>a;
	for(i=0;a[i]!='\0';i++){
		if(a[i]>='A'&&a[i]<='Z'){
		a[i]=a[i]+32;
		}else{
			a[i]=a[i]-32;
		}
     		
	}
 cout<<a;
 return 0;
}
