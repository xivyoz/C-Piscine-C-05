#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_iterative_factorial(int	nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}
	while (nb > 0)
	{
		factorial *= nb--;
	}
	return (factorial);
}
