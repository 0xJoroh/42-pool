/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 19:25:08 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/01 12:58:00 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	result = 1;
	i = 0;
	if (power < 0)
		return (0);
	while (++i <= power)
		result *= nb;
	return (result);
}
