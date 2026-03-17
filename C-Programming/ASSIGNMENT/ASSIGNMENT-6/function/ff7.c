#include<stdio.h>
int vowel();
void main(){
	if(vowel()){
		printf("vowel");
	}else{
		printf("contant");
	}
}int vowel(){
	char ch='g';
	if(ch=='A'||ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'||ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
      return 1;
    else
      return 0;
	
}