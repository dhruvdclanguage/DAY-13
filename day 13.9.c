#include<stdio.h>

int main (){
	
	       int n , i = 1 , Factorial = 1 ;
	
		   printf("Enter the value : ");
		    scanf("%d",&n);
	
	do {
		
		   Factorial = Factorial * i;
	       i++;
			
	   }   while (i<=n);
	
	       printf("%d\n",Factorial);
	
	  return 0;
}

