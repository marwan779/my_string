/*====================== Includes ======================*/

#include <stdio.h>
#include <string.h>
#include "my_string.h"

/*================ Definition Of Functions ================*/

// 1-my_memchr function:-

void *my_memchr(void *string, int c, unsigned int length)
{
    unsigned char *temp_string = string;
    void *ret_val = NULL;
    unsigned char value = (unsigned char)c;
    if (temp_string == NULL)
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        while (length--)
        {
            if (*temp_string == value)
            {
                ret_val = (void *)temp_string;
                break;
            }
            else
            {
                temp_string++;
            }
        }
    }
    return ret_val;
}

// 2-my_memcmp function:-

int my_memcmp(const void *str1, const void *str2, unsigned int n)
{
    int ret_val = 0;
    const unsigned char *string_1 = str1;
    const unsigned char *string_2 = str2;
    if ((string_1 == NULL) || (string_2 == NULL))
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        if (string_1 == string_2)
        {
            ret_val = 0;
        }
        else
        {
            while (n--)
            {
                if (*string_1 < *string_2)
                {
                    ret_val = -1;
                    break;
                }
                else if (*string_1 > *string_2)
                {
                    ret_val = 1;
                    break;
                }
                else
                {
                    string_1++;
                    string_2++;
                }
            }
        }
    }
    return ret_val;
}

// 3-my_memcpy function:-

void *my_memcpy(void *cpyto, const void *cpyfrom, unsigned int length)
{
    unsigned char *temp_cpyto = cpyto;
    const unsigned char *temp_cpyfrom = cpyfrom;
    unsigned char *ret_ptr = cpyto;
    if ((temp_cpyto == NULL) || (temp_cpyfrom == NULL))
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        while (length--)
        {
            *temp_cpyto++ = *temp_cpyfrom++;
        }
    }
    return ret_ptr;
}

// 4-my_memmove function:-

void *my_memmove(void *cpyto, const void *cpyfrom, unsigned int length)
{
    unsigned char *temp_cpyto = cpyto;
    const unsigned char *temp_cpyfrom = cpyfrom;
    unsigned char *ret_ptr = cpyto;
    if ((temp_cpyto == NULL) || (temp_cpyfrom == NULL))
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        if (temp_cpyfrom > temp_cpyto)
        {
            while (length--)
            {
                *temp_cpyto++ = *temp_cpyfrom++;
            }
        }
        else if (temp_cpyfrom < temp_cpyto)
        {
            for (int i = length; i > 0; i--)
            {
                temp_cpyto[i - 1] = temp_cpyfrom[i - 1];
            }
        }
    }
    return ret_ptr;
}

// 5-my_memset function:-

void *my_memset(void *str, int c, unsigned int length)
{
    unsigned char *temp_str = str;
    unsigned char temp_c = (unsigned char)c;
    if (temp_str == NULL)
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        while (length--)
        {
            *temp_str = temp_c;
            temp_str++;
        }
    }
    return str;
}

// 6-my_strcat function:-

char *my_strcat(char *str1, char *str2)
{
    unsigned int len1 = strlen(str2);
    unsigned int len2 = strlen(str1);
    char *ptr_to_str2;
    char *ptr_to_str1 = str1;
    ptr_to_str2 = str2 + len1;
    if ((str1 == NULL) || (str2 == NULL))
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        while (len2--)
        {
            *ptr_to_str2 = *ptr_to_str1;
            ptr_to_str2++;
            ptr_to_str1++;
        }
        ptr_to_str2 = '\0';
    }
    return str2;
}

// 7-my_strncat function:-

unsigned char *my_strncat(unsigned char *dest, unsigned char *src, unsigned int length)
{
    unsigned char *temp_dest = dest;
    unsigned char *temp_src = src;
    if ((dest == NULL) || (src == NULL))
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        while (*temp_dest != '\0')
        {
            temp_dest++;
        }
        while (length--)
        {
            *temp_dest++ = *temp_src++;
        }
    }
    return dest;
}

// 8-my_strchr function:-

char *my_strchr(char *str, int c)
{
    unsigned char *temp_str = str;
    unsigned char c1 = (unsigned char)c;
    unsigned int lenght = strlen(temp_str);
    char *ret_val = NULL;
    if (temp_str == NULL)
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        while (lenght--)
        {
            if (*temp_str == c1)
            {
                ret_val = temp_str;
            }
            else
            {
                temp_str++;
            }
        }
    }
    return ret_val;
}

// 9-my_strcmp function:-

int my_strcmp(const void *str1, const void *str2)
{
    int ret_val = 0;
    const unsigned char *string_1 = str1;
    const unsigned char *string_2 = str2;
    unsigned int len = strlen(string_1);
    if ((string_1 == NULL) || (string_2 == NULL))
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        if (string_1 == string_2)
        {
            ret_val = 0;
        }
        else
        {
            while (len--)
            {
                if (*string_1 < *string_2)
                {
                    ret_val = -1;
                    break;
                }
                else if (*string_1 > *string_2)
                {
                    ret_val = 1;
                    break;
                }
                else
                {
                    ret_val = 0;
                    string_1++;
                    string_2++;
                }
            }
        }
    }
    return ret_val;
}

// 10-my_strncmp function:-

int my_strncmp(char *str1, char *str2, unsigned int length)
{
    char *temp_str1 = str1;
    char *temp_str2 = str2;
    int ret_val = 0;
    if ((str1 == NULL) || (str2 == NULL))
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        while (length--)
        {
            if (*temp_str1 > *temp_str2)
            {
                ret_val = 1;
            }
            else if (*temp_str1 < *temp_str2)
            {
                ret_val = -1;
            }
            else
            {
                ret_val = 0;
                temp_str1++;
                temp_str2++;
            }
        }
    }
    return ret_val;
}

// 11-my_strcpy function:-

char *my_strcpy(char *dest, char *src)
{
    char *temp_dest = dest;
    char *temp_src = src;
    unsigned int lenght = strlen(src);
    if ((dest == NULL) || (src == NULL))
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        while (lenght--)
        {
            *temp_dest++ = *temp_src++;
        }
        *temp_dest = '\0';
    }
    return dest;
}

// 12-my_strncpy function:-

char *my_strncpy(char *dest, char *src, unsigned int length)
{
    char *temp_dest = dest;
    char *temp_src = src;
    if ((dest == NULL) || (src == NULL))
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        while (length--)
        {
            *temp_dest++ = *temp_src++;
        }
        *temp_dest = '\0';
    }
    return dest;
}

// 13-my_strcspn function:-

unsigned int my_strcspn(char *str1, char *str2)
{
    char *temp_str1 = str1;
    char *temp_str2 = str2;
    unsigned int ret_val = 0;
    unsigned int len1 = strlen(str1);
    unsigned int len2 = strlen(str2);
    if ((str1 == NULL) || (str2 == NULL))
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        for (int i = 0; i < len1; i++)
        {
            int flag = 0;

            for (int j = 0; j < len2; j++)
            {
                if (*temp_str1 == *temp_str2)
                {
                    ret_val = i;
                    flag = 1;
                    break;
                }
                else
                {
                    temp_str2++;
                }
            }
            if (flag)
            {
                break;
            }
            temp_str2 = str2;
            temp_str1++;
        }
    }

    return ret_val;
}

// 14-my_strlen function:-

unsigned int my_strlen(char *str)
{
    char *temp_str = str;
    unsigned int ret_val = 0;
    while (*temp_str != '\0')
    {
        temp_str++;
        ret_val++;
    }
    return ret_val;
}

// 15-my_strspn function:-

unsigned int my_strspn(char *str1, char *str2)
{
    char *temp_str1 = str1;
    char *temp_str2 = str2;
    unsigned int ret_val = 0;
    unsigned int len1 = strlen(str2);
    unsigned int len2 = strlen(str1);
    if ((str1 == NULL) || (str2 == NULL))
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        for (int i = 0; i < len1; i++)
        {
            int flag = 0;

            for (int j = 0; j < len2; j++)
            {
                if (*temp_str1 == *temp_str2)
                {
                    ret_val++;
                    temp_str1++;
                    temp_str2++;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
    }

    return ret_val;
}

// 16-my_strpbrk function:-

char *my_strpbrk(char *str1, char *str2)
{
    char *temp_str1 = str1;
    char *temp_str2 = str2;
    char *ret_val = NULL;
    unsigned int len1 = strlen(str1);
    unsigned int len2 = strlen(str2);
    if ((str1 == NULL) || (str2 == NULL))
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        for (int i = 0; i < len1; i++)
        {
            int flag = 0;

            for (int j = 0; j < len2; j++)
            {
                if (*temp_str1 == *temp_str2)
                {
                    ret_val = temp_str2;
                    flag = 1;
                    break;
                }
                else
                {
                    temp_str2++;
                }
            }
            if (flag)
            {
                break;
            }
            temp_str2 = str2;
            temp_str1++;
        }
    }

    return temp_str2;
}

// 17-my_strrchr function:-

char *my_strrchr(char *str, int c)
{
    unsigned char *temp_string;
    char *ret_val = NULL;
    unsigned char value = (unsigned char)c;
    unsigned int length = my_strlen(str);
    temp_string = str + length;
    if (temp_string == NULL)
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        while (length--)
        {
            if (*temp_string == value)
            {
                ret_val = temp_string;
                break;
            }
            else
            {
                temp_string--;
            }
        }
    }
    return ret_val;
}

// 18-my_strstr function:-

char *my_strstr(char *str, char *sub_str)
{
    char *temp_str = str;
    char *temp_sub_str = sub_str;
    unsigned int len1 = my_strlen(str);
    unsigned int len2 = my_strlen(sub_str);
    unsigned int counter = 0;
    unsigned int flag = 0;
    if ((str == NULL) || (sub_str == NULL))
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        for (int i = 0; i < len2; i++)
        {
            counter = 0;
            for (int j = 0; j < len1; j++)
            {
                if (*temp_sub_str == *temp_str)
                {
                    temp_sub_str++;
                    temp_str++;
                    counter++;
                    if (counter == len2)
                    {
                        flag = 1;
                        break;
                    }
                }
                else
                {
                    temp_str++;
                    temp_sub_str = sub_str;
                }
            }
            if (flag && counter == len2)
            {
                temp_str -= len2;
                return temp_str;
            }
            else if (flag && counter != len2)
            {
                return NULL;
            }
        }
    }
}

// 19-my_strstr function:-

char *my_strtok(char *str, char *delim)
{
    char *temp_str = str;
    char *temp_c = delim;
    char len = my_strlen(str);
    int flag = 0;
    if ((str == NULL) || (temp_c == NULL))
    {
        printf("function failed due to Null pointer !!\n");
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (*temp_str == *temp_c)
            {
                temp_str++;
                temp_str = '\0';
                flag = 1;
                break;
            }
            else
            {
                temp_str++;
            }
        }
    }
    if (flag)
    {
        return temp_str;
    }
    else
    {
        temp_str = str;
        return temp_str;
    }
}
