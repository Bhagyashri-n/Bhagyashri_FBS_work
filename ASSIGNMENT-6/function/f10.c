#include<stdio.h>
void age();
void main(){
	
	age();

}void age(){
	int age=23;
	
	if (age>=18){
		printf("eligible for vote");
	}else{
		printf("not eligible for vote");
	}
}