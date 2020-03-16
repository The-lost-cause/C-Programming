#include<stdio.h>

int main(){
	
	int i,j,a,b,num,middle,c,d;
	int arr[111][111]={0};
	printf("Enter the type of Matrix you want to FORM :\n");
	scanf("%d",&num);
	
	if(num%2 == 0){
		printf("Number should be odd \n");
		return 0;
		}

	else {
	
	printf("You are Creating %d * %d Matrix \n",num ,num);
	printf("\n");	
	middle=(num+1)/2;
	c=0;
	d=num-1;
	a=1;
	b=d-1;

	// Logic
	//For Upper Triangle Formation

	for(i=middle-1;i>=0;i--){
                for(j=c;j<=d;j++){
                        arr[i][j]=1;
                        }
                c++;
                d--;
           }
	
	  //For Lower Traingle Formation

          for(i=middle;i<=num-1;i++){
                for(j=a;j<=b;j++){
                        arr[i][j]=1;
                        }
                a++;
                b--;

	}
}
	
	//Printing

	for(i=0;i<num;i++){
        for(j=0;j<num;j++){
        printf("%d\t",arr[i][j]);
        }
	printf("\n");
}

return 0;
}
