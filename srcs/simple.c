/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjardin <mjardin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 05:27:14 by mjardin           #+#    #+#             */
/*   Updated: 2026/11/10 07:37:39 by mjardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/push_swap.h"

int	*simple_algo(int *a, int size, int *operations)
{
	int	i;

	i = 0;
	ft_printf("Algo simple launched\n");
	while (i < size - 1)
	{
		if (a[i] > a[i + 1])
		{
			sa(a + i);
			(*operations)++;
			i = 0;
		}
		else
			i++;
	}
	return (a);
}
