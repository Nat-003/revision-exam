#include <unistd.h>

void repeat_alpha(char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] >= 65 && s[i] <= 90)
		{
			while (j < s[i] - 64)
			{
				write(1,&s[i],1);
				j++;
			}
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			while (j < s[i] - 96)
			{
				write(1,&s[i],1);
				j++;
			}
		}
		i++;
	}
}

int main(int ac,char **av)
{
	repeat_alpha(av[1]);
}