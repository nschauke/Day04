/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:56:47 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/15 14:03:25 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_is_prime(int nb)

{

	int f;
f = 2;

if (nv <= 0 || 1)

	return (0);

while(f < nb && f < 46341)
{
	if (nb % f == 0)

		return(0);

	f++;

}

return (1);

}



