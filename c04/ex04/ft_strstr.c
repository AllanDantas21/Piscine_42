/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:17:57 by aldantas          #+#    #+#             */
/*   Updated: 2023/08/15 20:55:09 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<unistd.h>
#include<stdio.h>*/

char	*ft_strstr(char *str, char *to_find)
{	
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0' && to_find[c] != '\0')
	{
		if (str[i] == to_find[c])
			c++;
		else
			c = 0;
		i++;
	}
	if (to_find[c] == '\0')
		return (&str[i - c]);
	return (0);
}
/*int	main(void)
{
	char string[] = "F_BD_CE_BD_EF_BF_BE_EF_BF_BD_EF__DD_EF_BF_BD";
	char find[] = "_EF_BF_BE_E";

	printf("%s", ft_strstr(string, find));
}*/
