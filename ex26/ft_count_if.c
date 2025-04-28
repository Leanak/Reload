/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:33:03 by lenakach          #+#    #+#             */
/*   Updated: 2025/04/26 15:33:04 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}

int	ft_return(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'e')
			return (1);
		else
			i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*str[] = {"Hey","Hello", "Ok", 0};

	printf("%d", ft_count_if(str, &ft_return));
	return (0);
}*/