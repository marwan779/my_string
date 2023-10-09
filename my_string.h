/*
                    Documentation Part
===================================================================
    @file           : my_string.h
    @author         : marwan mohamed
    @brief          : Contains the Prototypes of the functions
===================================================================

*/

/*====================== Start Of File Gaurd ======================*/

#ifndef _MY_STRING_H
#define _MY_STRING_H

/*====================== Includes ======================*/

 #include <stdio.h>

/*================ Prototypes Of Functions ================*/

void *my_memchr(void *string, int c, unsigned int length);

int my_memcmp( const void *str1,  const void *str2, unsigned int n);

void *my_memcpy(void *cpyto, const void *cpyfrom, unsigned int length);

void *my_memmove(void *cpyto, const void *cpyfrom, unsigned int  length);

void *my_memset(void *str, int c, unsigned int length );

char *my_strcat(char *destination,  char *source);

unsigned char *my_strncat(unsigned char *dest, unsigned char *src, unsigned int length);

char *my_strchr( char *str, int c);

int my_strcmp(const void *str1, const void *str2);

int my_strncmp( char *str1,  char *str2, unsigned int length);

char *my_strcpy(char *dest,  char *src);

char *my_strncpy(char *dest,  char *src, unsigned int length);

unsigned int my_strcspn(char *str1, char *str2);

unsigned int my_strlen( char *str);

unsigned int my_strspn(char *str1, char *str2);

char *my_strpbrk( char *str1,  char *str2);

char *my_strrchr(char *str, int c);

char *my_strstr( char *str,  char *sub_str);

char *my_strtok(char *str,  char *delim);



/*====================== End Of File Gaurd ======================*/
#endif
