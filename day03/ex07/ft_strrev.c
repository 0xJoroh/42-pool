/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 16:08:21 by mait-si-          #+#    #+#             */
/*   Updated: 2019/08/31 17:21:35 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		size;
	char	helper;

	i = -1;
	size = ft_strlen(str) - 1;
	while (++i <= (size / 2))
	{
		helper = str[i];
		str[i] = str[size - i];
		str[size - i] = helper;
	}
	return (str);
}

int main(void)
{
	char str[] = "123456789abcd";

	printf("%s", ft_strrev(str));
	return (0);
}