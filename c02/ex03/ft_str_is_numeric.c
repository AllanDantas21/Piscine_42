/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:38:37 by aldantas          #+#    #+#             */
/*   Updated: 2023/08/08 17:18:25 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{	
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			c++;
		i++;
	}
	if (c == i || i == 0)
		return (1);
	else
		return (0);
}
/*int     main()
{
       printf("%d",ft_str_is_numeric("4125"));
}*/
