/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwahbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 18:34:25 by mwahbi            #+#    #+#             */
/*   Updated: 2021/08/17 14:16:48 by mwahbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	ft_print_params(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			write(1, &av[i][j], 1);
			j++;
		}
		av[i][j] = '\0';
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	char	*max;
	int		s;

	(void)ac;
	(void)av;
	s = 1;
	while (s < ac - 1)
	{
		if (ft_strcmp(av[s], av[s + 1]) > 0)
		{
			max = av[s];
			av[s] = av [s + 1];
			av[s + 1] = max;
			s = 1;
		}
		else
			s++;
	}
	ft_print_params(ac, av);
	return (0);
}
