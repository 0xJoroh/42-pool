/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 12:13:27 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/02 11:18:15 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int n, int t[])
{
	int i;
	int c;

	i = 0;
	c = 0;
	while ((i < n) && (t[c] < 10))
	{
		ft_putchar(t[c] + 48);
		c++;
		i++;
	}
	if (c != 10)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int i;
	int t[10];

	i = 10;
	t[0] = 0;
	while (--i > -1)
		t[i] = i;
	if ((0 < n) && (n < 10))
		print(n, t);
}

int main(void)
{
	ft_print_combn(1233456);
	return (0);
}