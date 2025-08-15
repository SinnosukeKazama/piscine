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

char    *ft_strncat(char* dest, char* src, unsigned int nb)
{
    int     i;
    unsigned int     j;

    i = ft_strlen(dest);
    j = 0;
    while (j < nb)
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
    unsigned int bytes = 3;

    strcpy(s, "abcde");
    puts(ft_strncat(s, "fghij", bytes));

    strcpy(s, "abcde");
    puts(strncat(s, "fghij", bytes));
  
}