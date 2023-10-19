/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:34:53 by aldantas          #+#    #+#             */
/*   Updated: 2023/08/16 21:52:28 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_sqrt(int nb)
{
	long int	i;
	long int	j;

	if (nb < 0)
		return (0);
	j = nb;
	i = 1;
	while (i * i <= j)
	{
		if (i * i == j)
			return (i);
		i++;
	}
	return (0);
}

/*int	main()
{
	printf("%d", ft_sqrt(1));
}*/
