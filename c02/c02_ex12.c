#include <stdio.h>

//s‚Í‚à‚Æ‚Ì”Žš‚Æ‹t
void itoa(char s[], unsigned long long n, int radix) {
	int i;
	int mod;

	i = 0;
	while (n > 0) /* n ‚ðí‚é */
	{
		mod = n % radix;
		if (radix == 16 && mod > 9)
			s[i] = mod - 10 + 'a';
		else
			s[i] = mod + '0'; /* ŽŸ‚ÌŒ… */
		n /= radix;

		++i;
	}
	s[i] = '\0';
}
int ft_strlen(char* addr)
{
	int i;

	i = 0;
	while (addr[i] != '\0')
		++i;
	return (i);
} 
void out_addr(char* addr)
{
	char dest[32];
	int i;
	int len;

	i = -1;
	itoa(dest, addr, 16);
	len = ft_strlen(dest);
	while (++i < 16 - len)
		printf("0");
	while (--len>=0)
		printf("%c", dest[len]);

	
	//printf("<%p>", addr);//for check
}
void out_hex(char* addr)
{
	int i;
	char dest[3];
	int sp_c =0;
	int all_len;
	int need_sp;

	i = 0;
	while (i < 16 && addr[i] != '\0')
	{
		if (i % 2 == 0)
		{
			printf(" ");
			sp_c++;
		}
			
		
		itoa(dest, addr[i], 16);
		printf("%c%c", dest[1], dest[0]);
		++i;
	}
	all_len = i * 2 + sp_c;
	need_sp = 40 - all_len;
	i = 0;
	while (i < need_sp)
	{
		printf(" ");
		++i;
	}
	
}
void out_str(char* addr)
{
	int i;

	i = 0;
	printf(" ");
	while (i < 16 && addr[i]!='\0')
	{
		if (32 <= addr[i] && addr[i] <= 126)
			printf("%c", addr[i]);
		else
			printf(".");
		++i;
	}
}

void	*ft_print_memory(void* addr, unsigned int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		out_addr((char*)(addr)+i);
		printf(":");
		out_hex((char*)(addr)+i);
		out_str((char*)(addr)+i);
		printf("\n");
		i += 16;
	}
}


///////////////////////
int main() {
	char s[] = "abcdefghijklnmopq ert ffoiefhn fpejmwfwq'fn femejofe]";
	ft_print_memory(s, sizeof(s));
}