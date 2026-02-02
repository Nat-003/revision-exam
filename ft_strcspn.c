#include <unistd.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i = 0;
	
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return i;
			j++;
		}
		i++;
	}
	return i;
}
#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hello, world!";
	size_t len = strlen(str);
    const char *reject = " !"; // We want to stop at a space, comma, or exclamation
    
    size_t len_strcspn = ft_strcspn(str, reject);
	size_t len_strcspn2 = strcspn(str, reject);
	printf("------------------%ld----------\n",len);
    printf("The length of the prefix before a special character is: %zu\n", len_strcspn);
	printf("The length of the prefix before a special character is: %zu\n", len_strcspn2);
    // This will print 5, because 'H-e-l-l-o' are not in " ,!"
    
    return 0;
}