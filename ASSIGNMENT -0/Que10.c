#include<stdio.h>
void main(){
	int English=90,Math=70,Science=50,History=90,Marathi=98,Total;
	float Percentage;
	
	Total=English+Math+Science+History+Marathi;
	
	printf("total marks are:-%d \n",Total);
	
	Percentage=(Total/500.0)*100;
	
	printf("percentage of marks are:-%f \n",Percentage);
	
}