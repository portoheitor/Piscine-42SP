/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hribeiro <hribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:50:04 by hribeiro          #+#    #+#             */
/*   Updated: 2023/08/28 18:03:37 by hribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Escreva uma função que exiba ’N’ ou ’P’ segundo o sinal do inteiro passado como
//parâmetro. Se n for negativo, exiba ’N’. Se n for positivo ou nulo, exiba ’P

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_is_negative(int n)
{
	int i;

	i = 0;
	if(n < i)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}


}

int	main()
{
	int num;

	num = -1;
	ft_is_negative(num);
}
