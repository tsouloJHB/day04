/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:41:26 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/25 09:22:01 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0){
		return (0);
	}
	if(power >0)
	{
		return(nb * ft_recursive_power(nb,power -1));
	}
	else
	{
		return (1);
	}
}
int main(void)
{
 printf("Results is = %i\n",ft_recursive_power(2,3));
 return(0);
}

