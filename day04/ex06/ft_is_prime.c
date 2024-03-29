/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 19:26:16 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/01 12:54:21 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 1;
	if (nb < 2)
		return (0);
	while (++i <= nb)
	{
		if (((nb % i == 0) && (i != nb)))
			return (0);
	}
	return (1);
}
