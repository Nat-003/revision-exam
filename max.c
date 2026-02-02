// int max(int *tab, unsigned int len)
// {
// 	int i;
// 	int curr_max;
// 	i = 0;
// 	if (len == 0)
// 		return (0);
	
// 	curr_max = 0;
// 	while (i < len)
// 	{
// 		if (tab[i] > curr_max)
// 			curr_max = tab[i];
// 		i++;
// 	}
// 	return (curr_max);
// }
int		max(int* tab, unsigned int len)
{
	int count = 0;
	int result = 0;
	int i = 0;
	if (len > 0)
	{
		while (count < len)
		{
			if (tab[i] > result)
				result = tab[i];
			i++;
			count++;
		}
		return (result);
	}
	return (0);
}

#include <stdio.h>
int main()
{
	int tab[] = {-1,-5,-3,-7,-90};
	int len = sizeof(tab) / sizeof(tab[0]);
	int res = max(tab,len);
	printf("%d",res);
}