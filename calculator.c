#include<stdio.h>
#include<stdlib.h>
#include "cal.h"

int main(){
	int category, enter, selection;
	int a;
	
	do{
	
		printf("Enter the number of your selection\n 1.Addition(+)\n 2.Substraction(-)\n 3.Multiplication(*)\n 4.Division(/)\n 5.Power(^) \n 6.Modulos(%)");
		printf("\nEnter your category selection : ");
		scanf("%d",&category);
		
			switch(category){
				
				case 1 :
			        addition();
					break;
						
				case 2 :
			        substraction();
					break;
						
				case 3 :
					multiplication();
					break;
							
				case 4 :
					division();
					break;
						  	   		  
				case 5 :
					power();
					break;
						  			  			
				case 6	:
					mode(); 
 		 	        break;	
 							 					        
				default :
					printf("Invalied selection\n");
			}
			printf("\n");
			printf("****************************************************************************************************\n");
			printf("\n");
			printf("enter 1 for continue : ");
			scanf("%d",&a);
	}while(a==1);

	return 0;
}



