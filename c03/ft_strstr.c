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

char*   ft_strstr(char* str, char* to_find)
{
    int     i;
    int     j;
    
    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == to_find[0])
        {
            while (to_find[j] != '\0')
            {
                if (to_find[j] != str[i + j])
                    break;
                ++j;
            }
            if (j == ft_strlen(to_find))
                return (&str[i]);
        }
        ++i;
    }
    return (0);
}

int main(void)
{
    char* p = ft_strstr("abcde", "c");
    if (p == NULL) {
        puts("Œ©‚Â‚©‚ç‚È‚¢B");
    }
    else {
        puts(p);
    }

    char* p2 = strstr("abcde", "c");
    if (p2 == NULL) {
        puts("Œ©‚Â‚©‚ç‚È‚¢B");
    }
    else {
        puts(p2);
    }
}