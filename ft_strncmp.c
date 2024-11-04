#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}
/*
int main()
{
    char str1[] = "ABCd";
    char str2[] = "ABCe";

    printf("%d", ft_strncmp(str1, str2, 3));
    return 0;
}
*/