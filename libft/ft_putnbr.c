/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhennigh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:56:11 by nhennigh          #+#    #+#             */
/*   Updated: 2019/02/13 17:08:27 by nhennigh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		if (n < -9)
		{
			ft_putnbr(-1 * (n / 10));
		}
		ft_putchar(-1 * (n % 10) + '0');
		return ;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
}
