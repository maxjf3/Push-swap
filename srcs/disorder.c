/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjardin <mjardin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 05:52:26 by mjardin           #+#    #+#             */
/*   Updated: 2026/11/10 08:59:20 by mjardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	compute_disorder(int *tab, int size)
{
	int		mistakes;
	int		total_pairs;
	int		i;
	int		j;

	mistakes = 0;
	total_pairs = 0;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			total_pairs += 1;
			if (tab[i] > tab[j])
				mistakes += 1;
			j++;
		}
		i++;
	}
	return ((double)mistakes / (double)total_pairs);
}
