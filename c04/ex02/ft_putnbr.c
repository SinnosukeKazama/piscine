void ft_putnbr(int nb)
{
	const int	radix = 10;
	int i;
	int mod;
	char s[0xff];

	i = 0;
	while (nb > 0) /* n ‚ðí‚é */
	{
		mod = nb % radix;
		s[i] = mod + '0'; /* ŽŸ‚ÌŒ… */
		nb /= radix;
		++i;
	}
	while(--i >= 0)
		printf("%c", s[i]);//mast swap to write()
}

#include<stdio.h>
int main()
{
	ft_putnbr(43567);
}