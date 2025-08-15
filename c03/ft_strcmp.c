#include <stdio.h>
#include <string.h>

int     ft_strcmp(char* s1, char* s2)
{
    int     i;
    
    i = 0;
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] < s2[i])
            return (-1);
        else if (s1[i] > s2[i])
            return (1); 
        ++i;
    }
    return 0;
}

int main(void)
{
    char a[] = "abcd45";
    char b[] = "abcd123";
    char c[] = "xyz";
    char d[] = "cdef";

    printf("%d\n", ft_strcmp(a, b));
    printf("%d\n", ft_strcmp(a, c));
    printf("%d\n", ft_strcmp(c, d));

    printf("%d\n", strcmp(a, b));
    printf("%d\n", strcmp(a, c));
    printf("%d\n", strcmp(c, d));
}