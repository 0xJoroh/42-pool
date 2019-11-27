/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 19:24:28 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/01 16:20:25 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	i;
	int	nbr;

	if (nb == 0)
		return (1);
	if (0 < nb && nb <= 12)
	{
		nbr = nb;
		i = nb;
		while (--i > 0)
			nbr *= i;
		return (nbr);
	}
	return (0);
}
