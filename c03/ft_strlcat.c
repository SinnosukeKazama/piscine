#include <stdio.h>
#include <string.h>

int     ft_strlen(char* str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        ++i;
    return (i);
}

unsigned int ft_strlcat(char* dest, char* src, unsigned int size)
{
    unsigned int     i;
    unsigned const int   len_d = ft_strlen(dest);
    unsigned const int   len_s = ft_strlen(src);

    if (size <= len_d)
        return(size + len_d);
    i = 0;
    while (i < size - len_d - 1)
    {
        dest[len_d + i] = src[i];
        ++i;
        
    }
    dest[len_d + i] = '\0';
    return (len_d + len_s);
}

int main(void)
{
    unsigned int size = 10;
    char s[10];

    strcpy(s, "ABC");
    printf("%ld",ft_strlcat(s, "7654321", size));
    return (0);
}