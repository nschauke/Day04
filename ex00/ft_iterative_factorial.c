/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:51:10 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/14 11:07:43 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_factorial(int nb)

{
	int Iterative;

	iterative = 0;
	if(nb > 0)
	{

		iterative = 1;
		while(nb)
		{
			iterative = iterarive*nb;
			nb--;
		}
	}

	return (iterative);
}

