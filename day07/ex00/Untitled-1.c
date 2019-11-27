/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 23:36:51 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/12 23:49:44 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_atoi(char *str)
{
    int i;
    int nbr;
    int is_negative;

    i = 0;
    is_negative = 0;
    nbr = 0;
    if (str[i] == '\0')
        return (0);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '+')
        i++;
    if (str[i] == '-')
    {
        is_negative = 1;
        i++;
    }
    while ('0' <= str[i] && str[i] <= '9')
    {
        nbr = nbr * 10 + str[i] - 48;
        i++;
    }
    if (is_negative == 1)
        return (-nbr);
    return (nbr);
}