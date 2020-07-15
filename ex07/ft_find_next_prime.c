/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:08:34 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/15 14:25:30 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_find_next_prime(int nb)

{

	int 	m;

	if (nb < 2)

		return (0);

	m = 1;

	while ( ++m < nb)

		if(!(nb % m))

			return (0);
	return (1);

}

int ft_find_next_prime(int nb)

{
	if (is_prime(nb))
			return (nb);

			return (ft_find_next_prime(nb + 1));

			}



				
