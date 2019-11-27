/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 19:25:11 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/01 12:46:15 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (1 <= nb && nb <= 12)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 0)
		return (1);
	return (0);
}
