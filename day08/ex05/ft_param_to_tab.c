/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 10:46:37 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/12 14:05:31 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char		*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char*)malloc(ft_strlen(src) * sizeof(*src));
	if (ptr[i] == '\0')
		*ptr = '\0';
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

t_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*p;
	int			i;

	i = 0;
	if (!(p = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		p[i].size_param = ft_strlen(av[i]);
		p[i].str = av[i];
		p[i].copy = ft_strdup(av[i]);
		p[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	p[i].str = 0;
	return (p);
}
