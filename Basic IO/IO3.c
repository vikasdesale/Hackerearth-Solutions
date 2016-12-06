#include <stdio.h>
#include<string.h>

int main()
{
	char temp,c[100],a[100];
	int i,j,flag=0;
	scanf("%s",a);
	
	j=strlen(a)-1;
	for(i=0;i<=j;i++){
		c[i]=a[i];
	}
   for(i=0;i<strlen(a)/2;i++)
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
    printf("YES");
	}else{
		printf("NO");
	}
    return 0;
}

