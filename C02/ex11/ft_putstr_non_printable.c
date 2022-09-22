/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwahbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:23:23 by mwahbi            #+#    #+#             */
/*   Updated: 2021/08/10 18:02:18 by mwahbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_printable(char *c)
{
	if (*c >= 32 && *c <= 126)
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int					i;
	unsigned char		a;
	unsigned char		b;
	char				*hexa;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_printable(&str[i]))
		{
			write(1, &str[i], 1);
		}
		else
		{
			a = hexa[(str[i] / 16)];
			b = hexa[(str[i] % 16)];
			write(1, "\\", 1);
			write(1, &a, 1);
			write(1, &b, 1);
		}
		i++;
	}
}
