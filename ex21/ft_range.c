/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:04:14 by lenakach          #+#    #+#             */
/*   Updated: 2025/04/24 10:04:18 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
    int	*tab;
	int	i;
	int	j;

	i = 0;
	if (min >= max)
		return (NULL);
	j = max - min;

	tab = malloc (j * sizeof(int));
	if (!tab)
		return (NULL);
	while (min < max)
	{
		tab[i] = min++;
		i++;
	}
	return (tab);
}

int	main(void)
{
	int	*tab;
	int	i;

	i = 0;
	tab = ft_range(-5, 10);

	while (i < 15)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}