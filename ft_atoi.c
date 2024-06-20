#include "libft.h"
int	ft_atoi(const char *c)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = 1;
	while (*c == ' ' || (*c >= 9 && *c <= 13))
	{
		c++;	
	}
	if (*c == '+' || *c == '-')
	{
		if (*c == '-')
		{
			sign = -1;
		}
		c++;
	}
	i = 0;
	while (ft_isdigit(c[i]))
	{
		result = result * 10 + (c[i] - '0');
		i++;
	}
	return (result * sign);
}
