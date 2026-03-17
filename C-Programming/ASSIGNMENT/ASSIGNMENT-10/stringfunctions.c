#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50]="Hello";
    char str2[50]="World";
    char str3[50];
    char str4[50]="HELLO";
    char str5[50]="programming";
    char text[]="C,Java,Python";

    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    //1 strlen
    printf("Length = %lu\n",strlen(str1));

    //2 strcpy
    strcpy(str3,str1);
    printf("strcpy = %s\n",str3);

    //3 strncpy
    strncpy(str3,str2,3);
    str3[3]='\0';
    printf("strncpy = %s\n",str3);

    //4 strcat
    strcat(str1,str2);
    printf("strcat = %s\n",str1);

    //5 strncat
    strncat(str1,"ABC",2);
    printf("strncat = %s\n",str1);

    //6 strcmp
    printf("strcmp = %d\n",strcmp("abc","abc"));

    //7 strncmp
    printf("strncmp = %d\n",strncmp("abc","abd",2));

    //8 strchr
    printf("strchr = %s\n",strchr("Hello",'l'));

    //9 strrchr
    printf("strrchr = %s\n",strrchr("Hello",'l'));

    //10 strstr
    printf("strstr = %s\n",strstr("HelloWorld","World"));

    //11 strlwr
    printf("Lower = %s\n",strlwr(str4));

    //12 strupr
    printf("Upper = %s\n",strupr(str5));

    //13 strrev
    printf("Reverse = %s\n",strrev(str5));

    //14 strtok
    char *token=strtok(text,",");
    while(token!=NULL)
    {
        printf("Token = %s\n",token);
        token=strtok(NULL,",");
    }

    //15 memcpy
    memcpy(str3,str2,5);
    str3[5]='\0';
    printf("memcpy = %s\n",str3);

    //16 memcmp
    printf("memcmp = %d\n",memcmp("abc","abd",2));

    //17 memset
    memset(str3,'*',3);
    str3[3]='\0';
    printf("memset = %s\n",str3);

    //18 sprintf
    char buffer[50];
    sprintf(buffer,"Number=%d",10);
    printf("sprintf = %s\n",buffer);

    //19 sscanf
    int num;
    sscanf("123","%d",&num);
    printf("sscanf = %d\n",num);

    //20 gets
    char name[20];
    printf("Enter name: ");
    gets(name);

    //21 puts
    puts(name);

    return 0;
}