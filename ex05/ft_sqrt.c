/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:46:14 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/15 13:52:42 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_sqrt(int nb)

	
{
	int		 moon;

	moon = 1;

	while(moon <= nb)

	{
		if (( moon * moon) == nb)

			return (moon);

		moon++;

	}

	return (0);

}



