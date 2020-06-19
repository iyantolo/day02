/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyantolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:15:17 by iyantolo          #+#    #+#             */
/*   Updated: 2020/06/19 15:05:27 by iyantolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int ft_putchar (char letter)
{
	write( 1, &letter, 1 );
}
void ft_is_negative(int n)
{
if (n <= 0)
	ft_putchar('N');
else
	ft_putchar('P');
}
int main()
{
	ft_is_negative(-1);

}

