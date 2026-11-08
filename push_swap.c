/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjardin <mjardin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 15:27:24 by mjardin           #+#    #+#             */
/*   Updated: 2026/11/08 15:40:37 by mjardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../Printf/include/ft_printf.h"
#include "../Libft/libft.h"

//  int	*simple_algo(int *a, int *b)
//  {
	
//  }

 int	verif_args(int argc, char *argv[])
 {
	int	i;

	i = 0;
	(void)argc;
	while (argv[i])
	{
		i++;
	}
	return (1);
 }

int	main(int argc, char *argv[])
{
	if (!verif_args(argc, argv))
	{
		ft_printf("Arguments error\n");
		return (1);
	}
}