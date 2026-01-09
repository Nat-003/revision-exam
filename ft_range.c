#include <stdlib.h>



int *ft_range(int start, int end)
{
	int *arr;
	int i;
	int len;

	i = 0;
	len = end - start;
	arr = malloc(sizeof(int) * len);
	while (start <= end)
	{
		arr[i] = start;
		i++;
		start++;
		
	}
	return (arr);
}
#include <stdio.h>
int main()
{
	int *res = ft_range(-6,6);
	for (size_t i = 0; i < 13; i++)
	{
		printf("%d\n",res[i]);
	}
}