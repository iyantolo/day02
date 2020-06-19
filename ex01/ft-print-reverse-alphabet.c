/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-print-reverse-alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyantolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:48:15 by iyantolo          #+#    #+#             */
/*   Updated: 2020/06/19 10:56:07 by iyantolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <stdio.h>
void ft_print_reverse_alphabet (void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
   {
	   putchar (letter);
	   letter --;
   }
}
int main (void)
{
	ft_print_reverse_alphabet();
	return 0;
}
