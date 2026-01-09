#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *s)
{
	int res = 0, i = 0;
	while (s[i] && s[i] >= 48 && s[i] <= 57)
	{
		res *= 10;
		res += s[i] - 48;
		i++;
	}
	return (res);
}
void ft_putstr(char *s)
{
	int i = 0;
	while (s[i])
	{
		write(1,&s[i],1);
		i++;
	}
	
}
void ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write(1,&c,1);
}
void tab(char *s)
{
	
	int multiplier;
	int i;
	int res;

	multiplier = ft_atoi(s);
	i = 1;
	while (i <= 9)
	{
		res = 0;
		res = i * multiplier;
		ft_putnbr(i);
		ft_putstr(" x ");
		ft_putnbr(multiplier);
		ft_putstr(" = ");
		ft_putnbr(res);
		write(1,"\n",1);
		i++;
	}
}

int main(int ac, char **av)
{
	tab(av[1]);
}