#include<stdio.h>

int main(){

	int arr[5]={1,2,3,4,5};
	int i,temp,count,n;
	printf("Original Array is \n");
	 for(i=0;i<5;i++){
                printf("%d\t",arr[i]);
                }
        printf("\n");
	printf("Enter the number of iteration:\n");
	scanf("%d",&n);

	// Shifting Logic	
	for(count=1;count<=n;count++){
		temp=arr[4];
		for(i=4;i>=1;i--){
			arr[i]=arr[i-1];
			}
		arr[0]=temp;

	//Printing Values
	for(i=0;i<5;i++){
		printf("%d\t",arr[i]);
		}
	printf("\n");
	}

return 0;
}
