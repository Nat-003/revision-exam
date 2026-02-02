#include <unistd.h>
#include <stdlib.h>

int ft_toupper(int c)
{
	if (c >= 'a'&& c <= 'z')
		c -= 32;
	return c;
}


int ft_putchar(char c)
{
    return write(1, &c, 1);
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i;

		i = 0;
		while (av[1][i])
		{
			if (av[1][i]== '_')
			{
				i++;
				ft_putchar(ft_toupper(av[1][i])); 
			}
			else
				ft_putchar(av[1][i]);
			i++;
		}
		
	}
	ft_putchar('\n');
}