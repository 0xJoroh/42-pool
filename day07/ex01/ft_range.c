/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 22:27:50 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/12 01:15:25 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	array = malloc((max - min) * sizeof(int));
	while (min < max)
		array[i++] = min++;
	return (array);
}
