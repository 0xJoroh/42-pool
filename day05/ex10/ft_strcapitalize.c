/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 22:14:25 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/04 00:06:09 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	prev;

	i = -1;
	while (str[++i] != '\0')
	{
		prev = str[i - 1];
		if ((i == 0) && ('a' <= str[i] && str[i] <= 'z'))
			str[i] -= 32;
		else if ('a' <= str[i] && str[i] <= 'z')
		{
			if (prev > 122 || prev < 48)
				str[i] -= 32;
			if (57 < prev && prev < 65)
				str[i] -= 32;
			if (90 < prev && prev < 97)
				str[i] -= 32;
		}
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			if (('a' <= prev && prev <= 'z') || ('A' <= prev && prev <= 'Z'))
				str[i] += 32;
		}
	}
	return (str);
}
