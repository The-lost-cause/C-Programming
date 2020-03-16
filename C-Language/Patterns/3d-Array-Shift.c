#include<stdio.h>

int main(){
	int arr[3][3];
	int i,j;
	int c=0;
	printf("Enter Elements in an array:\n");

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
			}
		}
	//Original 3D-Array
	printf("Original Array is \n");
	for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        printf("%d\t",arr[i][j]);
                        }
		 printf("\n");
                }
	 printf("\n");
	//Logic
	printf("New Array after Shift is :\n");
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			printf("%d \t %d \t %d",arr[j][i],arr[c][c],arr[i][j]);
			c++;
			printf("\n");
			}
		}
return 0;
}
	
