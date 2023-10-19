/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:31:28 by aldantas          #+#    #+#             */
/*   Updated: 2023/08/08 17:22:31 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<unistd.h>*/
/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{	
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}	
/*int	main(void)
{
	char ch[10] = "ABACATE";
	char dest[11]; 

	ft_strcpy(dest, ch);

	printf("%s", dest);
}*/
