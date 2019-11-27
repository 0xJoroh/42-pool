/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 15:49:13 by mait-si-          #+#    #+#             */
/*   Updated: 2019/08/31 17:23:11 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		++i;
		str++;
	}
	return (i);
}

int main(void)
{
	char str[] = "123456789";
	printf("%d", ft_strlen(str));
	return (0);
}