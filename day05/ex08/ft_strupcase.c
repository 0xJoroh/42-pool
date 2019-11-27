/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 22:08:18 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/03 23:44:08 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}