/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:10:55 by aldantas          #+#    #+#             */
/*   Updated: 2023/08/13 04:20:26 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[c] != '\0')
		c++;
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		i++;
		++c;
	}
	dest[c] = '\0';
	return (dest);
}

/*int	main()
{
	char dest[] = "aba";
	char src[] = "cate";

	ft_strcat(dest, src);

	printf("%s", dest);
}*/
