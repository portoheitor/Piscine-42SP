/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hribeiro <hribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:37:50 by hribeiro          #+#    #+#             */
/*   Updated: 2023/08/28 17:26:49 by hribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//• Escreva uma função que exiba o alfabeto em minúsculas, numa única linha, em
//ordem crescente, começando pela letra ’a’.

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

void	ft_print_alphabet(void)
{
	int i;

	i = 'a';
		while (i < 'z')
	{
		ft_putchar(i);
		i ++;
	}

}

int	 main(void)
{
	ft_print_alphabet();
	return 0;
}
