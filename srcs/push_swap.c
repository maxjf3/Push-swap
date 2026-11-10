/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjardin <mjardin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 15:27:24 by mjardin           #+#    #+#             */
/*   Updated: 2026/11/10 06:04:17 by mjardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/ft_printf.h"
#include "../include/libft.h"

int	verif_args(char *argv[], int *algo)
 {
	int	i;
	int	j;

	i = 2;
	if (ft_strncmp("--simple", argv[1], 8) == 0)
		*algo = 1;
	if (ft_strncmp("--medium", argv[1], 8) == 0)
		*algo = 2;
	if (ft_strncmp("--complex", argv[1], 9) == 0)
		*algo = 3;
	if (ft_strncmp("--adaptative", argv[1], 12) == 0)
		*algo = 4;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9') &&
				!(argv[i][j] == '-' || argv[i][j] == '+'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
 }

 int	*init_tab(int argc, char *argv[])
 {
	int	i;
	int	j;
	int	*tab;

	i = 0;
	j = 2;
	tab = ft_calloc(sizeof(int *), argc);
	while (i < argc)
	{
		tab[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
	return (tab);
 }

 void	launch_algo(int algo, int *tab)
 {
	if (algo == 1)
		simple_algo(tab);
	// if (algo == 2)
	// 	medium_algo();
	// if (algo == 3)
	// 	complex_algo();
	// if (algo == 4)
	// 	find_best_algo();
 }

int	main(int argc, char *argv[])
{
	int	algo;
	int	*tab;
	float disorder;

	algo = 0;
	if (argc < 4)
	{
		ft_printf("Error: not enough arguments.\n");
		return (-1);	
	}
	if (!verif_args(argv, &algo))
	{
		ft_printf("Error: arguments are not numbers.\n");
		return (-1);
	}
	if (algo == 0)
	{
		ft_printf("Error: mode not set.\n");
		return (-1);
	}
	tab = init_tab(argc - 2, argv);
	disorder = compute_disorder(tab, argc - 2);
	printf("%.2f\n", disorder);
	launch_algo(algo, tab);
	return (0);
}
