/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:10:23 by aldantas          #+#    #+#             */
/*   Updated: 2023/08/15 21:08:55 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	res;

	factorial = nb;
	res = 1;
	if (nb < 0)
		return (0);
	while (factorial >= 1)
	{
		res *= factorial;
		factorial--;
	}
	return (res);
}

/*int	main(void)
{
	printf("%d", ft_iterative_factorial(3));
}*/
