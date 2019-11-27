/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 11:45:50 by mait-si-          #+#    #+#             */
/*   Updated: 2019/08/31 17:15:30 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int helper;

	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if (tab[i] > tab[j])
			{
				helper = tab[i];
				tab[i] = tab[j];
				tab[j] = helper;
			}
		}
	}
}

int		main(void)
{
	int tab[10] = {0, 54, -58, -99877, 21, 2465, 0, 657, 32};
	ft_sort_integer_table(tab, 9);
	int i = -1;
	while (++i < 9)
		printf("%d ", tab[i]);
	return (0);
}
