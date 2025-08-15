#include <stdio.h>
#include <string.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int     i;

    i = 0;
    while (i < n)
    {
        if (s1[i] < s2[i] || s1[i] == '\0')
            return (-1);
        else if (s1[i] > s2[i] || s2[i] == '\0')
            return (1);
        ++i;
    }
    return 0;
}

int main(void)
{
    char a[] = "abcd45";
    char b[] = "abc123";
    char c[] = "xyz";
    char d[] = "cdef";

    printf("%d\n", ft_strncmp(a, b, 8));
    printf("%d\n", ft_strncmp(a, c, 3));
    printf("%d\n", ft_strncmp(c, d, 3));

    printf("%d\n", strncmp(a, b, 8));
    printf("%d\n", strncmp(a, c, 3));
    printf("%d\n", strncmp(c, d, 3));
}