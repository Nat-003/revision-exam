#include <unistd.h>

void camel_to_snake(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			s[i] += 32;
			write(1,"_",1);

		}
		write(1,&s[i],1);
		i++;
	}
}

int main(int ac, char **av)
{
	camel_to_snake(av[1]);
}