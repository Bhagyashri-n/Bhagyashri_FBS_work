#include<stdio.h>
void main(){
	int minutes=340,hours,remainingmin;
	
	hours=minutes/60;
    remainingmin=minutes % 60;
    
    printf("hours and ramainingmin= %d hr and %d min",hours,remainingmin);
}
