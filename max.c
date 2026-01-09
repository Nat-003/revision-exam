#include <stdio.h>

int max(int* tab, unsigned int len)
{
	int i;
	int curr_max;

	i = 0;
	curr_max = 0;
	while (i < len)
	{
		if (tab[i] > curr_max)
			curr_max = tab[i];
		i++;
	}
	return (curr_max);
}

int main()
{
	int tab[] = {1,2,3,4,335,6,123};
	int len = sizeof(tab) / sizeof(tab[0]);
	int res = max(tab,len);
	printf("%d",res);
}