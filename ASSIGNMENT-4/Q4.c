#include<stdio.h>
int main(){
	int num,rem,sum,i,j,fact,temp;
	
	printf("Enter the number=");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++){
		
		temp=i;
		sum=0;
		
		while(temp>0){
			rem=temp%10;
			fact=1;
			for(j=1;j<=rem;j++){
				fact=fact*j;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==i){
			printf("%d ",i);
		}
	}
	return 0;
}