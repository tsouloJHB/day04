/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:34:22 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/25 09:20:35 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int		ft_iterative_factorial(int nb)
{
	int i;
	int fac;
	
	i = 1;
	fac = nb;
	if ((nb < 0) || (nb > 12))
	{
	
	   return (0);
	}
	if (nb >= 1)
	{
		while (nb > 1)
		{
			fac = fac * (--nb);
		
		}
		return (fac);
	}
	else
	{
		return (1);
	}
}



