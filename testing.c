/*
                    Documentation Part
===================================================================
 @file           : testing.c
 @author         : marwan mohamed
 @brief          : comparing the functions of (my_string.h) library
                      with the functions of (string.h) library
===================================================================

*/

/*====================== Includes ======================*/

#include <stdio.h>
#include <string.h>
#include "my_string.h"
#include "my_string.c"

/*=============== Start Of Global Variable Definition Part ===============*/
char my_name1[] = "marwan . mohamed . el_sayed";
char my_name2[] =" ";
char my_name3[] = "TutorialsPoint";
char my_name4[] = "Point";
unsigned int len;
int len1;
void *ptr=NULL;
void *ptr2=NULL;
char  *ptr3;
 char str1 [] ={4,2,3,4,5};
 char str2 [] ={1,2,3,4,5};
 int ret;

/*=============== End Of Global Variable Definition Part ===============*/

int main()
{
/*=============== Start Of local Variable Definition Part ===============*/

/*=============== End Of local Variable Definition Part ===============*/

   /* ptr=my_memchr(my_name,'.',len);
    printf("%s\n",ptr);
    printf("------------------------------------\n");
    ptr=memchr(my_name,'.',len);
    printf("%s\n",ptr);
    printf("===================================\n");
    ret=my_memcmp(str1,str2,len);
    printf("%i\n",ret);
    printf("------------------------------------\n");
    ret=memcmp(str1,str2,len);
    printf("%i\n",ret);
    printf("===================================\n");
    ptr=memcpy(my_name2,my_name,len);
    printf("%s\n",ptr);
    printf("------------------------------------\n");
    ptr=my_memcpy(my_name2,my_name,len);
    printf("%s\n",ptr);
    printf("===================================\n");
    ptr=memmove(my_name2,my_name,len);
    printf("%s\n",ptr);
    printf("------------------------------------\n");
    ptr=my_memmove(my_name2,my_name,len);
    printf("%s\n",ptr);
    printf("===================================\n");
    ptr=memset(my_name2,'m',29);
    printf("%s\n",ptr);
    printf("------------------------------------\n");
    ptr=my_memset(my_name2,',',29);
    printf("%s\n",ptr);
    printf("===================================\n");
    strcat(my_name1,my_name2);
    printf("%s\n",my_name1);
    printf("------------------------------------\n");
    strcat(my_name4,my_name3);
    printf("%s\n",my_name4);
    printf("===================================\n");
    strncat(my_name1,my_name2,8);
    printf("%s\n",my_name1);
    printf("------------------------------------\n");
    my_strncat(my_name3,my_name4,8);
    printf("%s\n",my_name3);
    printf("===================================\n");
    ptr=strchr(my_name1,'o');
    printf("%s\n",ptr);
    printf("------------------------------------\n");
    ptr2=my_strchr(my_name3,'o');
    printf("%s\n",ptr2);
    printf("===================================\n");
    ret=strcmp(str1,str2);
    printf("%i\n",ret);
    printf("------------------------------------\n");
    ret=my_strcmp(str1,str2);
    printf("%i\n",ret);
    printf("===================================\n");
    ret=strncmp(str1,str2,3);
    printf("%i\n",ret);
    printf("------------------------------------\n");
    ret=my_strncmp(str1,str2,3);
    printf("%i\n",ret);
    printf("===================================\n");
    my_memset(my_name2,'.',19);
    strcpy(my_name2,my_name1);
    printf("%s\n",my_name2);
    printf("------------------------------------\n");
    my_memset(my_name4,'.',19);
    my_strcpy(my_name4,my_name3);
    printf("%s\n",my_name4);
    printf("===================================\n");
    my_memset(my_name2,'.',19);
    strncpy(my_name2,my_name1,19);
    printf("%s\n",my_name2);
    printf("------------------------------------\n");
    my_memset(my_name4,'.',19);
    my_strncpy(my_name4,my_name3,19);
    printf("%s\n",my_name4);
    printf("===================================\n");
    ret =strcspn(str1,str2);
    printf("%i\n",ret);
    printf("------------------------------------\n");
    ret =my_strcspn(str1,str2);
    printf("%i\n",ret);
    printf("===================================\n");
    len=strlen(my_name1);
    printf("%i\n",len);
    printf("------------------------------------\n");
    len=my_strlen(my_name1);
    printf("%i\n",len);
    printf("===================================\n");
    len=strspn(my_name4,my_name3);
    printf("%i\n",len);
    printf("------------------------------------\n");
    len=my_strspn(my_name4,my_name3);
    printf("%i\n",len);
    printf("===================================\n");
    ptr3=strpbrk(my_name1,my_name3);
    printf("%c\n",*ptr3);
    printf("------------------------------------\n");
    ptr3=my_strpbrk(my_name1,my_name3);
    printf("%c\n",*ptr3);
    printf("===================================\n");
    ptr3=strchr(my_name1,'.');
    printf("%s\n",ptr3);
    printf("------------------------------------\n");
    ptr3=my_strchr(my_name1,'.');
    printf("%s\n",ptr3);
    printf("===================================\n");
    ptr3=strstr(my_name3,my_name4);
    printf("%s\n",ptr3);
    printf("------------------------------------\n");
    ptr3=my_strstr(my_name3,my_name4);
    printf("%s\n",ptr3);
    printf("===================================\n");
    ptr3=strtok(my_name1,my_name2);
    printf("%s\n",ptr3);
    printf("------------------------------------\n");
    ptr3=strtok(my_name1,my_name2);
    printf("%s\n",ptr3);*/
    printf("===================================\n");
    printf("------------------------------------\n");



}