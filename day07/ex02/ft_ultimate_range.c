/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:21:56 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/12 01:12:41 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		range[0] = 0;
		return (0);
	}
	range[0] = malloc((max - min) * sizeof(int));
	if (range[0] == '\0')
		return (0);
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (i);
}
