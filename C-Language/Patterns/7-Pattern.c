#include<stdio.h>

int main(){

	int i,j;
	
	for(i=6;i>=0;i--){
		if(i==6){
		for(j=0;j<7;j++){
			printf("7");
			}
			printf("\n ");
		continue;
		}
		for(j=i;j>0;j--){
		  printf(" ");
		}
		printf("7");
		printf("\n ");
	 }
return 0;
}

