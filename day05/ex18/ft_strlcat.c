/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 11:40:13 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/12 00:01:54 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int destlen;
	int srclen;

	i = 0;
	destlen = 0;
	srclen = 0;
	while (dest[destlen] != '\0')
		destlen++;
	while (src[srclen] != '\0')
		srclen++;
	while ((i < (int)size - destlen - 1) && (src[i] != '\0'))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	if ((int)size < destlen)
		return (size + srclen);
	return (srclen + destlen);
}
