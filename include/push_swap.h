/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjardin <mjardin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 15:29:50 by mjardin           #+#    #+#             */
/*   Updated: 2026/11/10 07:17:03 by mjardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>

int		verif_args(char *argv[], int *algo);
int		*simple_algo(int *a, int size);
float	compute_disorder(int *tab, int size);
void	sa(int *a);

#endif
