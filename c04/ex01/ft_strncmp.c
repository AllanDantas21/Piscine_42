/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:30:56 by aldantas          #+#    #+#             */
/*   Updated: 2023/08/13 02:41:04 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	int				result;
	unsigned int	i;

	result = 0;
	i = 0;
	while ((s1[i] != '\0' && i < n) || (s2[i] != '\0' && i < n))
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_strncmp("abcdea","abcded", 6));
}*/
