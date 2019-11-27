/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 15:38:59 by mait-si-          #+#    #+#             */
/*   Updated: 2019/08/31 17:35:33 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

int main(void)
{
	int n1;
	int n2;
	int *x;
	int *y;

	n1 = 5;
	n2 = 9;
	x = &n1;
	y = &n2;
	ft_ultimate_div_mod(x, y);
	printf("n1 = %d\n", n1);
	printf("n2 = %d", n2);

	return (0);
}