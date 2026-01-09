#include <unistd.h>

void last_word(char *s)
{
	int i;
	int end;
	int start;
	if (!s)
	{
		write(1,"\n",1);
		return ;
	}
	
	i = 0;
	end = 0;
	start = 0;
	while (s[i])
		i++;
	end = i;
	while (s[i] != 32)
	{
		i--;
	}
	start = i;
	while (start < end)
	{
		write(1,&s[start],1);
		start++;
	}
}

int main(int ac, char **av)
{
	last_word(av[1]);
}