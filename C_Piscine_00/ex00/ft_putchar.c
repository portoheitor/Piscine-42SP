/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hribeiro <hribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:13:13 by hribeiro          #+#    #+#             */
/*   Updated: 2023/08/28 16:34:38 by hribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Escreva uma função que exiba o caractere passado como parâmetro.

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

int	main()
{
	char one_char;

	one_char = 'c'; 		//para declara um char usamos aspas simples , aspas duplas sao para declaração de string
	ft_putchar(one_char);
	return 0;
}
