/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:04:16 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/24 16:33:50 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_fibonacci(int index)
{

    if(index == 0 || index == 1)
    {
        return index;
    }
	else
	{
		return ft_fibonacci(index-1) + ft_fibonacci(index-2);
	}

	:return (0);
}



