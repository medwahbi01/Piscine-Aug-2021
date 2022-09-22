/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwahbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:29:03 by mwahbi            #+#    #+#             */
/*   Updated: 2021/08/22 15:32:26 by mwahbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == '\t')
		return (1);
	return (0);
}

int	ft_base(char *str)
{
	int	i;
	int	j;
	int	b;

	b = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || ft_space(str[i]))
			b = 0;
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				b = 0;
			j++;
		}
		i++;
	}
	if (b == 1)
		return (i);
	return (-1);
}

int	ft_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	get_indice(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	i = 0;
	sign = 1;
	while (ft_space(str[i]))
		i++;
	while (ft_sign(str[i]))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	if (ft_base(base) != -1)
	{
		while (get_indice(str[i], base) != -1)
		{
			result = result * ft_base(base) + get_indice (str[i], base);
			i++;
		}
	}
	return (result * sign);
}
