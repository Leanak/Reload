/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:51:39 by lenakach          #+#    #+#             */
/*   Updated: 2025/04/23 12:51:41 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i < nb)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*int main(void)
{
printf("%d", ft_sqrt(-10));
return (0);
}*/
