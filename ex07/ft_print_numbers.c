/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:47:10 by lenakach          #+#    #+#             */
/*   Updated: 2025/04/22 17:49:43 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/


void	ft_print_numbers(void)
{
	char	c;
	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
