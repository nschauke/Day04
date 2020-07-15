#include <unistd.h>

int ft_iterative_power(int nb, int power)

{
	int mega;

	mega = 1;
	if (power < 0)

		return (0);
	
	while (power)
	{
		mega = mega *nb;
		power--;

	}
}
