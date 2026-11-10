/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjardin <mjardin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 05:41:21 by mjardin           #+#    #+#             */
/*   Updated: 2026/11/10 05:50:04 by mjardin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sa(int **a)
{
	int	tmp;

	tmp = *a[0];
	*a[0] = *a[1];
	*a[1] = tmp;
}

void	sb(int **b)
{
	int	tmp;

	tmp = *b[0];
	*b[0] = *b[1];
	*b[1] = tmp;
}
void	ss(int **a, int **b)
{
	sa(&a);
	sb(&b);
}

void	pa(int **a, int **b)
{
	if (!b)
		return ;
	int	tmp;
	
}