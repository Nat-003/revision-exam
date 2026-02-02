#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i;
		int j;
		int len;

		len = 0;
		i = 0;
		j = 0;
		while (av[1][len])
			len++;
		while (av[2][i])
		{
			if (av[2][i] == av[1][j])
				j++;
			i++;
		}
		i = 0;
		if (j == len)
		{
			while (av[1][i])
			{
				write(1,&av[1][i],1);
				i++;
			}
				
			
		}
		
	}
	write(1,"\n",1);
}