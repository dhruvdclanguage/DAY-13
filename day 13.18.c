#include<stdio.h>

int main (){
	
	int n , m , sum=0 ;
	
		printf("Enter the value to sum 1:");
		
		scanf("%d",&n);
	
	  for(m=1 ; m<=n ; m ++){
		
		sum = sum + m;
			
	}
	    printf("%d\n",sum);
	
    	return 0;
}
