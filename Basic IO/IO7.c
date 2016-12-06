#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAXINPUT 100
int main(){
	
	
	
		int flag=0,flag1=0;
	 char input[MAXINPUT] = "";
	 	 char input2[MAXINPUT] = "";
    int length,length1,i; 

    scanf ("%s\n",input);
     scanf ("%s",input2);
    length = strlen (input);
 length1 = strlen (input2);
    for (i=0;i<length; i++){
	
        if (!isdigit(input[i]))
        {
           flag=1;
        }
}
	    for (i=0;i<length1; i++)
 {
		    	if (!isdigit(input2[i]))
        	{
           		flag1=1;
        	}
        }	
if(flag==1&&flag1==1){
 printf("Invalid Input"); 
}else{
	c=atoi(input);
	a=atoi(input2);
	printf("%d",c+a);
  
}

	

	return 0;
}
