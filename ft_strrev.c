int strlen(char*s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

void reverse_str(char *s)
{
	int len = strlen(s);
	int i = 0;
	while (s[len])
		len--;
}