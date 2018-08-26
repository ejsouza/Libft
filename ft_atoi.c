#include "libft.h"

int		ft_atoi(const char *str)
{
	short	flag;
	long	number;

	flag = 1;
	number = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		flag = (*str == '-') ? -1 : 1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		number = (number * 10) + (*str - '0');
		str++;
	}
	return ((int)number * flag);
}
