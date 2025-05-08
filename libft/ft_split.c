/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:21:04 by andcardo          #+#    #+#             */
/*   Updated: 2025/05/08 11:38:19 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	
	count = 0;
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*save_word(char const *s, char c)
{
	size_t	word_len;
	char	*word;

	word_len = 0;
	while (s[word_len] && s[word_len] != c)
		word_len++;
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!word)
		return(NULL);
	ft_strlcpy(word, s, word_len + 1);
	return (word);
}

static void	free_array(char **word_array, int counter)
{
	while (counter--)
		free(word_array[counter]);
	free(word_array);
}

char	**ft_split(char const *s, char c)
{
	char	**word_array;
	int		j;
	int		word_nb;

	if (!s)
		return (NULL);
	j = 0;
	word_nb = count_words(s, c);
	word_array = (char **)malloc((word_nb + 1) * sizeof(char *));
	if (!word_array)
		return (NULL);
	while (*s && j < word_nb)
	{
		while (*s && *s == c)
			s++;
		if (*s != '\0')
		{
			word_array[j] = save_word(s, c);
			if (!word_array[j])
			{
				free_array(word_array, j);
				return (NULL);
			}
			j++;
		}
		while (*s && *s != c)
			s++;
	}
	word_array[j] = NULL;
	return (word_array);
}

/*
int main(void)
{
	void	*s = ft_memchr("turpeta", 'a', 6);
	printf("%p\n", s);
	printf("%s\n", (char *)s);
	char *s1 = "   understands hello world how are you greater suun ";
	size_t count = count_words(s1, '\0');
	char **word_arr = ft_split(s1, '\0');
	size_t i;
	i = 0;
	while (i < count)
	{
		printf("word_arr[%zu] =>\t%s\n",i, word_arr[i]);
		i++;
	}
	printf("word_arr[%zu] =>\t%s\n",i, word_arr[i]);
}
 */
