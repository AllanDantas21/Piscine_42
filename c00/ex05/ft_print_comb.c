/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:29:08 by aldantas          #+#    #+#             */
/*   Updated: 2023/08/01 15:07:07 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_comb(void)
{
	int	cen;
	int	dez;
	int	uni;

	cen = 48;
	while (cen <= 55)
	{
		dez = cen + 1;
		while (dez <= 56)
		{
			uni = dez + 1;
			while (uni <= 57)
			{
				write(1, &cen, 1);
				write(1, &dez, 1);
				write(1, &uni, 1);
				uni++;
				if (cen != 55)
					write(1, ", ", 2);
			}
			dez++;
		}
		cen++;
	}
}
