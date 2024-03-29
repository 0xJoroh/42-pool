/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 22:13:33 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/03 23:44:52 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
	}
	return (str);
}
