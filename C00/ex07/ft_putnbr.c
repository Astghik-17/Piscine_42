#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
        {
                ft_putnbr(nb / 10);
		print_char('8');
        }

	else if (nb < 0)
	{
		print_char('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		print_char('0' + nb % 10);
	}
}
