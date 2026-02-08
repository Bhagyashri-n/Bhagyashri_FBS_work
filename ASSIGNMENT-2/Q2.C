#include<stdio.h>
int main(){
	int s1,s2,s3;
	
	printf("Enter side-1=");
	scanf("%d",&s1);
	
	printf("Enter side-2=");
	scanf("%d",&s2);
	
	printf("Enter side-3=");
	scanf("%d",&s3);
	
	if(s1==s2 && s2==s3){
		printf("the triangle is Equilateral");
	}else if(s1==s2 || s2==s3 || s1==s3){
		printf("the triangle is isoscelen");
	}else{
		printf("the triangle is scalene");
	}
	return 0;
}