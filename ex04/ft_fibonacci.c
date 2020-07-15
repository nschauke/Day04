/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:37:25 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/15 13:42:58 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_fibonacci(int index)


{
	if (index == 0 || index == 1)

	return (index);

	else if ( index < 0)

	return (-1);
	
	else

	return ft_fibonacci(index -1) + (ft_fibonacci( index -2));

}


