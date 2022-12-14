/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwahbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:19:11 by mwahbi            #+#    #+#             */
/*   Updated: 2021/08/10 11:20:02 by mwahbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char*s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0'
		&& (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
