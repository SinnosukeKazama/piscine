#include <stdio.h>
//
//本番ではwhiteを使うため、出力はcharに限られる


//? 行の最初の文字のアドレス（16進数で表したアドレス）と、‘:’ が出力され
//  るようにしてください。
void	char_to_hex(char c)
{
	
}
void	print_hex(char c)
{
	if (c < 32 || c < 127)
	{
		char_to_hex(c);
	}
	
}
void print_addr(void *addr)
{

}


void	*ft_print_memory(void* addr, unsigned int size)
{
	int i;

	
	i = 0;
	print_addr(addr);
	while (i < size)
	{
		
		print_hex(*(char*)(addr));
		printf("%c", *(char*)(addr));
		++(char*)addr;
		++i;
	}
}

int		str_to_int(const char* str)
{

	int n = 0;
	const char* p = str;
	for (; *p; ++p) {
		n *= 10;     // "10": n = 0 * 10 = 0         ;n = 10 
		n += *p - '0';//      n = n + ('1' - '0') = 1 n =
	}
	return n;
}

char* int_to_str(int n, int digits, char *str)
{
	
	while (n <= 0) {

	}

	/*
	n = 10:
	 n = n /10 = 1
	 n = n + '0' = 49 , 
	 str[0] = (char)n = '1'
	 str[1 = n] = 0
	*/
}
///////////////////////
int main() {
	static const char s[] = { "10" };
	
	int value = 99;
	char bf[3];
	bf[0] = ((value / 10) ) + '0';
	bf[1] = (value % 10) + '0';
	bf[2] = '\0';
	printf("%s", bf);
	//printf("%d", str_to_int(s));
	//char str[] = "afs";
	//ft_print_memory(str, 4);
	//printf("%p,\n, %llu", str,(unsigned long long)str);

}