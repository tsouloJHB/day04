/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:37:17 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/25 09:21:04 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_recursive_factorial(int nb)
{
	if((nb < 0)  || (nb > 12))
	{
 		return (0);
	}
	if(nb >= 1)
	 {
		return (nb * ft_recursive_factorial(nb - 1));
	 }
	else
	 {
	 	return(1);
	 }
}


