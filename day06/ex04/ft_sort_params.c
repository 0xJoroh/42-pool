/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:48:22 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/05 09:32:29 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*helper;

	i = 0;
	while (++i < argc)
	{
		j = i - 1;
		while (++j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				helper = argv[i];
				argv[i] = argv[j];
				argv[j] = helper;
			}
		}
	}
	i = 0;
	while (argv[++i] != '\0')
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
