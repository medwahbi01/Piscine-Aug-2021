/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwahbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 09:33:33 by mwahbi            #+#    #+#             */
/*   Updated: 2021/08/10 16:45:04 by mwahbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] <= '~' && str[i] >= ' ')
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}