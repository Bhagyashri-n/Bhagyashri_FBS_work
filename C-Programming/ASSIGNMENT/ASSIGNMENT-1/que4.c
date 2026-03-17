//#include<stdio.h>
//void main()
//{
//	char ch='K';
//	
//	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||
//	ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
//		printf("%c is vowel",ch);
//	}else{
//		printf("%c is contant",ch);
//	}
//
//}

#include<stdio.h>
void main(){
	char ch;
	printf("enter the charcter-",ch);
	scanf("%c",&ch);
	
	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||
	ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
		printf("%c is vowel",ch);
	}else{
		printf("%c is contant",ch);
	}
	
}