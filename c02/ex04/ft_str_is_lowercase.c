/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:51:56 by aldantas          #+#    #+#             */
/*   Updated: 2023/08/08 17:19:35 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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
        printf("%s",ft_str_is_lowercase(""));
}*/
