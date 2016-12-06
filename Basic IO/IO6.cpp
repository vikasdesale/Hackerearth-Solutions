#include<iostream>
using namespace std;
int main(){
	
	int n,i;
	int a[1000];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cout<<a[i]-1<<endl;
	}
	return 0;
}
