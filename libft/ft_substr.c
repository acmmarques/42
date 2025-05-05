/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:23:02 by andcardo          #+#    #+#             */
/*   Updated: 2025/05/05 16:16:44 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(const char *s);

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*substr_ptr;
	unsigned int	i;

	if (start >= (unsigned int)ft_strlen(s))
	{
		substr_ptr = (char *)malloc(sizeof(char) * 1);
		if (substr_ptr == NULL)
			return (NULL);
		substr_ptr[0] = '\0';
		return (substr_ptr);
	}
	if (len > (unsigned long)ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr_ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr_ptr == NULL)
		return (NULL);
	i = 0;
	while (len > 0 && s[start + i] != '\0')
	{
		substr_ptr[i] = s[start + i];
		i++;
		len--;
	}
	substr_ptr[i] = '\0';
	return (substr_ptr);
}

/*
int	main(void)
{
	//char *s1 = ft_substr(NULL, 0, 0);
	char *s2 = ft_substr("Juliao Bolseiro não sabe nadar yo", 0, 20);	
	//char *s3 = ft_substr("hola", 4294967295, 0);
	printf("%s\n", s2);
}
 */
