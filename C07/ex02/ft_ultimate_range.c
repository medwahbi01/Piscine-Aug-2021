/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwahbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:25:52 by mwahbi            #+#    #+#             */
/*   Updated: 2021/08/18 16:40:51 by mwahbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = -1;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	len = max - min;
	*range = (int *)malloc(len * 4);
	if (*range == NULL)
	{
		return (-1);
	}
	while (++i < len)
	{
		range[0][i] = min + i;
	}
	return (i);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	int *range;
	printf("%d\n", ft_ultimate_range(&range, 2, 5));
	//printf("%d", ultimate_range(range2, 3, 6));
	printf("%d",range[2]);
}*/

/*void	debug_dump_array(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int		main(void)
{
	int	min;
	int	max;
	int	*range;
	int	bound;

	min = 5;
	max = 10;
	bound = ft_ultimate_range(&range, min, max);
	printf("min = %d, max = %d -> (bound = %d) ", min, max, bound);
	fflush(stdout);
	debug_dump_array(range, bound);
}*/
