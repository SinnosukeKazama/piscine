
void ft_putstr(char* str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);//mast swap to write()
		++i;
	}
}

#include<stdio.h>
int main(void)
{
	char s[] = "abcd";
	ft_putstr(s);
}
