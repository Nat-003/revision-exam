void bubble_sort(int *tab,int size)
{
	int i = 0;
	int j;
	while (i < size -1)
	{
		j = 0;
		while (j < size -1)
		{		
			if (tab[j] >= tab[j + 1])
			{
				int tmp = tab[j];
				tab[j] = tab[j +1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
#include <stdio.h>
int main()
{
	int tab[] = {39676,5,633,743,4,9,1,2,4545,234,77,88,45};
	int size = sizeof(tab)/sizeof(tab[0]);
	printf("unsorted list\n");
	for (size_t i = 0; i < size; i++)
	{
		printf("%d\n",tab[i]);
	}
	bubble_sort(tab,size);
	printf("sorted list\n");
	for (size_t i = 0; i < size; i++)
	{
		printf("%d\n",tab[i]);
	}
}