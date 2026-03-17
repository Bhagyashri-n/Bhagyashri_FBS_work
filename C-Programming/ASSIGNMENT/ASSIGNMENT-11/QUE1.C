#include<stdio.h>
#include<string.h>
#include<ctype.h>

// (All your functions same as it is)
// ----------- functions -------------
void mystrcpy(char *dest, char *src) {
    while(*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}

int mystrlen(char *str) {
    int count = 0;
    while(str[count] != '\0') count++;
    return count;
}

int mystrcmp(char *a, char *b) {
    while(*a && *b && *a == *b) {
        a++; b++;
    }
    return *a - *b;
}

void mystrcat(char *dest, char *src) {
    while(*dest) dest++;
    while(*src) *dest++ = *src++;
    *dest = '\0';
}

void mystrupper(char *str) {
    while(*str) {
        *str = toupper(*str);
        str++;
    }
}

void mystrlower(char *str) {
    while(*str) {
        *str = tolower(*str);
        str++;
    }
}

void mystrrev(char *str) {
    int i=0, j=mystrlen(str)-1;
    char temp;
    while(i<j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++; j--;
    }
}

// ----------- main function -------------
int main() {
    char str1[100], str2[100], temp[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // mystrcpy
    mystrcpy(temp, str1);
    printf("Copy: %s\n", temp);

    // mystrlen
    printf("Length: %d\n", mystrlen(str1));

    // mystrcmp
    printf("Compare: %d\n", mystrcmp(str1, str2));

    // mystrcat
    mystrcat(str1, str2);
    printf("Concatenation: %s\n", str1);

    // Uppercase
    mystrupper(str1);
    printf("Uppercase: %s\n", str1);

    // Lowercase
    mystrlower(str1);
    printf("Lowercase: %s\n", str1);

    // Reverse
    mystrrev(str1);
    printf("Reverse: %s\n", str1);

    return 0;
}