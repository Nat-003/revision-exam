#include <unistd.h>

// void str_cap(char *s)
// {
// 	int i;

// 	i = 0;
// 	while (s[i])
// 	{
// 		if (s[i] >= 'A' && s[i] <= 'Z')
// 			s[i]+=32;
// 		i++;
// 	}
// 	i = 0;
// 	while (s[i])
// 	{
// 		if (i == 0 && s[i] >= 97 && s[i] <= 122)
// 					s[0]-=32;
// 		if (s[i] == ' ')
// 		{
// 			if (s[i + 1] >= 97 && s[i + 1] <= 122)
// 			{
// 				s[i + 1] -= 32;
// 				write(1,&s[i],1);
// 			}
// 		}
// 		else
// 			write(1,&s[i],1);
// 		i++;
// 	}
// }

int is_Space(char c)
{
	if (c <= 32)
		return 1;
	return 0;
}

void ft_putchar(char c)
{
	write(1,&c,1);
}

void capitalizer(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i]+=32;
		if ((s[i] >= 'a' && s[i] <= 'z') && is_Space(s[i -1]))
			s[i]-=32;
		ft_putchar(s[i++]);
	}
}


int main(int ac, char **av)
{
    int i = 1;
    if (ac == 1)
        ft_putchar('\n');
    else
    {
        while (i < ac)
        {
            capitalizer(av[i]);
            ft_putchar('\n');
            i++;
        } 
    }
}