#include<stdio.h>
int main(){
	double price,discount;
	char student;
	
	printf("Enter The Toatlprice -");
	scanf("%lf",&price);
	
	printf("ARE YOU STUDENT ?(y/n):-");
	scanf(" %c",&student);
	
	if(student=='y' || student=='Y'){
		if(price>500){
			discount=price*0.20;
		}else{
			discount=price*0.10;
		}
	}else{
		if(price>600){
			discount=price*0.15;
		}else{
			discount=0;
		}
	}
	
	printf("DISCOUNT = %lf\n",discount);
	printf("FINAL AMOUNT = %lf\n",price-discount);
	
	return 0;
	
}