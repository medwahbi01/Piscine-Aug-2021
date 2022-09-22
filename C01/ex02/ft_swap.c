/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwahbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 09:04:14 by mwahbi            #+#    #+#             */
/*   Updated: 2021/08/07 12:47:44 by mwahbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}