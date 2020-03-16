#include<stdio.h>

int main(){

int arr[10][10];
int i,j,n,a,b;
int count=1;
a=0;
b=9;
printf("Checking the position of all the elemennts placed in an array:\n");
//Logic 
for (n=1;n<=5;n++){
for(i=a,j=a;j<=b;j++){
arr[i][j]=count;
count++;
printf("%d->%d%d ",arr[i][j],i,j);
}
a=a+1;                            
printf("\n");				
for(j=b,i=a;i<=b;i++){                 
arr[i][j]=count;
count++;
printf("%d->%d%d ",arr[i][j],i,j);
}
printf("\n");
a=a-1;
							
for(i=b,j=b-1;j>=a;j--){	
arr[i][j]=count;
count++;
printf("%d->%d%d ",arr[i][j],i,j);
}
printf("\n");
a=a+1;
		                
for(j=a-1,i=b-1;i>=a;i--){	
arr[i][j]=count;
count++;
printf("%d->%d%d ",arr[i][j],i,j);
}
printf("\n");
b-=1; 
 
}

printf("The Pattern  is as following  :  \n\n");
// Print Logic

for(i=0;i<=9;i++)
{
for(j=0;j<=9;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}
printf("\n");


return 0;
}
