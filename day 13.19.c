#include<stdio.h>

int main (){
	
	int n , Factorial=1 , i ;
	
		printf("Enter a value to sum 1: ");
		
		scanf("%d",&n);
	
	for( i=1 ; i<=n ; i++){
		
		Factorial = Factorial * i;
			
	}
	
	printf("%d\n",Factorial);
	
	return 0;
}
