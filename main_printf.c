#include <stdio.h>
int	ft_printf(char *format,...);

int main()
{
	int len;
	int	len1;
	int *p_len;
	int *p_len1;

	len = 0;
	len1 = 0;
	p_len = &len;
	p_len1 = &len1;
	printf("------sin nada-------\n");
	len = printf("Printf: Aqui no pasamos ningun parametro adicional\n");
	len1 = ft_printf("Ft_printf: Aqui no pasamos ningun parametro adicional\n");
	printf("Printf = %d\tFt_printf = %d\n", len, len1);
	printf("------con char c-----\n");
	len = printf("printf: esto es una char %c %c %c %c %c%c\n", '0', 0, 'A', '0' - 256, '\0', ' ');
	len1 = ft_printf("ft_printf: esto es una char %c %c %c %c %c%c\n", '0', 0,'A', '0' - 256, '\0', ' ');
	printf("Printf = %d\tFt_printf = %d\n", len, len1);
	printf("------con string s-----\n");
	len = printf("printf: aqui vamos a meter una string %s %s %s\n", "patata", "s", NULL);
	len1 = ft_printf("ft_printf: aqui vamos a meter una string %s %s %s\n", "patata", "s", NULL);
	printf("printf = %d\tft_printf = %d\n", len, len1);
	printf("------con decimal d-----\n");
	len = printf("printf: aqui vamos a meter un decimal %d %d\n", 123123, -5);
	len1 = ft_printf("ft_printf: aqui vamos a meter un decimal %d %d\n", 123123, -5);
	printf("printf = %d\tft_printf = %d\n", len, len1);
	printf("------con integer i-----\n");
	len = printf("printf: aqui vamos a meter un integer %i %i\n", 123, -5);
	len1 = ft_printf("ft_printf: aqui vamos a meter un integer %i %i\n", 123, -5);
	printf("printf = %d\tft_printf = %d\n", len, len1);
	printf("------con unsigned u-----\n");
	len = printf("printf: aqui vamos a meter un unsigned %u %u\n", 123, -5);
	len1 = ft_printf("ft_printf: aqui vamos a meter un unsigned %u %u\n", 123, -5);
	printf("printf = %d\tft_printf = %d\n", len, len1);
	printf("------con hexa x-----\n");
	len = printf("printf: aqui vamos a meter un hexa %x %X\n",123, 7000);
	len1 = ft_printf("ft_printf: aqui vamos a meter un hexa %x %X\n",123, 7000);
	printf("printf = %d\tft_printf = %d\n", len, len1);
	printf("------con pointer p-----\n");
	len = printf("printf: aqui vamos a meter un pointer %p %p\n",7000, 123);
	len1 = ft_printf("ft_printf: aqui vamos a meter un pointer %p %p\n",7000, 123);
	printf("printf = %d\tft_printf = %d\n", len, len1);
	printf("------con %%-----\n");
	len = printf("printf: aqui vamos a meter una %%\n");
	len1 = ft_printf("ft_printf: Aqui vamos a meter una %%\n");
	printf("printf = %d\tft_printf = %d\n", len, len1);
}
