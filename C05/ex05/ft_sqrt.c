/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwahbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 12:31:43 by mwahbi            #+#    #+#             */
/*   Updated: 2021/08/17 15:38:59 by mwahbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>

#include <time.h> 
*/
int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
int	main()
{
	time_t start,end;
	time(&start);

	 printf("sqrt of %d is %d\n", -360, ft_sqrt(-360));
        printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
        printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
        printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
        printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
        printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
        printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
        printf("sqrt of %d is %d\n", 255744064, ft_sqrt(255744064));
        printf("sqrt of %d is %d\n", 652549888, ft_sqrt(652549888));
        printf("sqrt of %d is %d\n", 14584761, ft_sqrt(14584761));
        printf("sqrt of %d is %d\n", 1952651058, ft_sqrt(1952651058));
        printf("sqrt of %d is %d\n", 31945104, ft_sqrt(31945104));
        printf("sqrt of %d is %d\n", 2117107907, ft_sqrt(2117107907));
        printf("sqrt of %d is %d\n", 510986025, ft_sqrt(510986025));
        printf("sqrt of %d is %d\n", 1292888858, ft_sqrt(1292888858));
        printf("sqrt of %d is %d\n", 417098929, ft_sqrt(417098929));
        printf("sqrt of %d is %d\n", 83128215, ft_sqrt(83128215));

		time(&end);
		printf("temps de 

}*/
