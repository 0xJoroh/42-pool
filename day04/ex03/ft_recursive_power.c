/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 19:25:23 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/01 12:48:19 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	unsigned int result;

	result = 1;
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power == 0)
		return (result);
	return (0);
}
