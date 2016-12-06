#include <iostream>
using namespace std;

int main(){
  char anagrama[30]="abcdefghijklmnopqrstuvwxyz";
  int a,b,count=0;
  cin>>a;
  cin>>b;
  for(int j = 0; j <a; j++){
    for(int k = 0; k < a; k++){
      if(j != k)
       {
	
		count++;
    }
    }
    cout << endl;
  }
  
    int MOD=1000000007;

	int c=a-b;
	if(c==1){
cout<<(count-2)%MOD;	
}	if(c==0){
cout<<(count-1)%MOD;;	
}if(c==2){
	cout<<(count-4)%MOD;
}
}
