void ft_putnbr(int nb)
{
	const int	radix = 10;
	int i;
	int mod;
	char s[0xff];
	int	minus_flag;

	minus_flag = 0;
	if (nb == -2147483647)//この数が最大なのはvs設定？仕様？？
		printf("-2147483648");
	else if (nb == 0)
		printf("0");
	else if (nb < 0 && minus_flag == 0)
	{
		nb *= -1;
		minus_flag = 1;
	}
	i = -1;
	while (nb > 0)
	{
		mod = nb % radix;
		nb /= radix;
		s[++i] = mod + '0';
	}
	if (minus_flag == 1)
		printf("-");
	while(i >= 0)
		printf("%c", s[i--]);//mast swap to write()
}//26行！！！！！！！！！！


void	ft_putnbr_rec(int nb)
{
	const int	radix = 10;

	//終了条件１
	if (nb ==  - 2147483647)//この数が最大なのはvs設定？仕様？？
		printf("-2147483648");
	//終了条件２
	if (nb == 0)
		printf("0");

	else if (nb < 0)
	{
		nb *= -1;
	}
	if(nb > 0)
	{

	}
}

#include<stdio.h>
int main()
{
	ft_putnbr(756);
}