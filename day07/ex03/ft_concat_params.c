/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:32:49 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/12 01:33:18 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*array;

	array = malloc(sizeof(char) * argc);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			array[k] = argv[i][j];
			j++;
			k++;
		}
		if ((i + 1) < argc)
			array[k] = '\n';
		k++;
		i++;
	}
	array[k - 1] = '\0';
	return (array);
}
