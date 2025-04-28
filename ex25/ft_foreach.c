/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:51:27 by lenakach          #+#    #+#             */
/*   Updated: 2025/04/24 18:51:28 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

/*void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483647", 11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}*/

/*int	main(void)
{
	int	tab[3] = {9, 5, 7};

	ft_foreach(tab, 3, &ft_putnbr);
	return (0);
}*/