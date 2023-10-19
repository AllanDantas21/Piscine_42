/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:37:05 by aldantas          #+#    #+#             */
/*   Updated: 2023/07/31 13:54:49 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;

	alphabet = 122;
	while (alphabet >= 97)
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
}

/*int	main()
{
	ft_print_reverse_alphabet();
}*/
