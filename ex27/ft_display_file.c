/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:26:08 by lenakach          #+#    #+#             */
/*   Updated: 2025/04/28 13:26:09 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>

void	disp_file(int fic)
{
	char	buffer[1024];
	int		r;

	while (1)
	{
		r = read(fic, buffer, 1024);
		if (r <= 0)
			break ;
		write(1, buffer, r);
	}
}

int	main(int ac, char **av)
{
	int	fic;

	if (ac != 2)
	{
		if (ac < 2)
			write(2, "File name missing.\n", 19);
		else
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fic = open(av[1], O_RDONLY);
	if (fic == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	disp_file(fic);
	close(fic);
	return (0);
}
