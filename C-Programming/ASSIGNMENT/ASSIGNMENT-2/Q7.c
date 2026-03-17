#include<stdio.h>
int main(){
	int age;
	printf("ENTER AGE=");
	scanf("%d",&age);
	
	if(age<=12){
		printf("CHILD");
	}else if(age>12 && age<19){
		printf("TEENEGER");
	}else if(age>20 && age<59){
		printf("ADULT");
	}else if(age>=60){
		printf("SENIOR");
    }
    return 0;
}