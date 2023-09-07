/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hribeiro <hribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:36:56 by hribeiro          #+#    #+#             */
/*   Updated: 2023/08/28 17:49:28 by hribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Escreva uma função que exiba todos os dígitos, em uma única linha, em ordem
//crescente

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers()
{
	int i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}


int	main()
{
	ft_print_numbers();
	return 0;
}
