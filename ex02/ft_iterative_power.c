/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:40:09 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/25 09:21:23 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb,int power)
{
	int fac;

	fac = 1;
	if(power < 0)
	{
		return (0);
	}
	if(power > 1)
	{
		while (power != 0)
		{
			fac *= nb;
			--power;
		}
		return fac;
	}	
	else
	{
		return (1);
	}
}

