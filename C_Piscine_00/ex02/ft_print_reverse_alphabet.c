/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hribeiro <hribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:28:13 by hribeiro          #+#    #+#             */
/*   Updated: 2023/08/28 17:35:36 by hribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet()
{
	int	i;

	i = 'z';
	while(i > 'a')
	{
		ft_putchar(i);
		i--;
	}
}


int main()
{
	ft_print_reverse_alphabet();
	return (0);
}
