/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 09:02:03 by mait-si-          #+#    #+#             */
/*   Updated: 2019/08/26 13:12:44 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = -1;
	while (++i <= 9)
	{
		j = i;
		while (++j <= 9)
		{
			k = j;
			while (++k <= 9)
			{
				ft_putchar((char)48 + i);
				ft_putchar((char)48 + j);
				ft_putchar((char)48 + k);
				if (j != 8 || i != 7 || k != 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
