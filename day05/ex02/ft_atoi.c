/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 11:45:49 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/04 00:13:26 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		nbr;
	int		is_negative;

	i = -1;
	is_negative = 0;
	nbr = 0;
	if ((str[0] == '-') && (48 <= str[1] && str[1] <= 57))
	{
		is_negative = 1;
		i = 0;
	}
	if ((str[0] == '+') && (48 <= str[1] && str[1] <= 57))
		i = 0;
	while (str[++i] != '\0')
	{
		if (48 <= str[i] && str[i] <= 57)
			nbr = nbr * 10 + str[i] - 48;
		else
			break ;
	}
	if (is_negative == 1)
		nbr *= -1;
	return (nbr);
}
