#include <stdio.h>
#include <string.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        ++i;
    return (i);
}

char     *ft_strcat(char* dest, char* src)
{
    int     i;
    int     j;

    i = ft_strlen(dest);
    j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        ++i;
        ++j;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char s[80];
    char s2[80];
    
    strcpy(s, "abc");
    puts(ft_strcat(s, "1234"));
    

    strcpy(s2, "abc");
    puts(strcat(s2, "1234"));
    
}