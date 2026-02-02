#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int j;
	int lookup[256] = {}

	if (ac < 3)
		write(1,"\n",1);
	i = 0;
	j = 0;
	 while (av[2][i])
	 {
		
		if (av[2][i] == av[1][j] && !lookup[(int)av[2][i]])
		{
			
			write(1,&av[1][j],1);
			j++;
		}
		i++;
	 }
	 
}