#include<stdio.h>

int main (){
	
    	int n , i = 1 , sum = 0 ;
	
		   printf ("Enter the value : ");
		   scanf  ("%d",&n);
	
	do {
		
		   sum = sum + i;
		   i++;
			
 	   }   while(i<=n);
	
	       printf("%d\n",sum);
	
	 return 0;
}
