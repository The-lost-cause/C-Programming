#include<stdio.h>

int main (){

	int arr[7][7]={0};
	int i,j;
	int c=0;
	int d=6;
	int a=1;
	int b=5;	
	for(i=3;i>=0;i--){
		for(j=c;j<=d;j++){
			arr[i][j]=1;
		//	printf("%d",arr[i][j]);
			}
		c++;
		d--;
 	   }
	 
          for(i=4;i<=6;i++){
		for(j=a;j<=b;j++){		
			arr[i][j]=1;
			}
		a++;
		b--;								
	 }		 
	//Printing
	for(i=0;i<7;i++){
	for(j=0;j<7;j++){
	printf("%d\t",arr[i][j]);	
	}
	printf("\n");
	}

return 0;
}
