/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-si- <mait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:54:15 by mait-si-          #+#    #+#             */
/*   Updated: 2019/09/12 02:00:24 by mait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		word_counter(char *str)
{
	int empty;
	int counter;

	empty = 0;
	counter = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\t')
			empty = 0;
		else if (!empty)
		{
			empty = 1;
			counter++;
		}
		str++;
	}
	return (counter);
}

void	fill_words(char *str, char **words)
{
	int i;
	int j;

	i = 0;
	while (*str)
	{
		j = 0;
		while (*str != '\t' && *str != '\n' && *str != ' ' && *str != '\0')
		{
			words[i][j++] = *str;
			str++;
		}
		if (j)
			words[i++][j] = '\0';
		if (*str == '\0')
			break ;
		str++;
	}
	words[i] = 0;
}

void	memory_allocat(int word_count, char **words, char *str)
{
	int i;
	int j;
	int letter_counter;

	i = 0;
	j = -1;
	while (i < word_count)
	{
		letter_counter = 0;
		while (str[++j] && str[j] != '\t' && str[j] != '\n' && str[j] != ' ')
			letter_counter++;
		if (letter_counter)
		{
			words[i] = malloc(sizeof(char) * (letter_counter + 1));
			i++;
		}
	}
	words[i] = malloc(sizeof(char));
}

char	**ft_split_whitespaces(char *str)
{
	int		word_count;
	char	**words;

	word_count = word_counter(str);
	words = malloc(sizeof(char*) * (word_count + 1));
	memory_allocat(word_count, words, str);
	fill_words(str, words);
	return (words);
}
