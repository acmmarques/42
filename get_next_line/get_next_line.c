/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:10:19 by andcardo          #+#    #+#             */
/*   Updated: 2025/06/02 14:55:47 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*
//encontra a primeira ocorrência do char c no str s;
ft_strchr;
//faz um duplicado do str s
ft_strdup;
ft_strlen;
ft_substr;
ft_strjoin;
*/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return ((char *)&(s[i]));
	return ((char *)0);
}

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;  
    size_t  src_len;

    src_len = ft_strlen(src);
    if (size == 0)
        return (src_len);
    i = 0;
    while (src[i] != '\0' && i < size - 1)
    {   
        dst[i] = src[i];
        i++;
    }   
    dst[i] = '\0';
    return (src_len);
}

void 	_fill_line(char *buf, char **line, char **stash)
{
	char	*ptr;
	int		size;
	int		s_len;

	//preciso de localizar a ocorrência do '\n'
	ptr = ft_strchr(buf, '\n');
	// o número de casas até o '\n' é guardado em size
	size = ptr - buf;
	// aloca-se a memória suficiente em line
	*line = (char *)malloc(sizeof(char) * (size + 1));
	// copia-se essa memória de buf para line
	ft_strlcpy(*line, buf, size + 1);
	s_len = ft_strlen(ptr);
	*stash = (char *)malloc(sizeof(char) * s_len);
	ft_strlcpy(*stash, ptr + 1, s_len);
}


void	_print_str_es(char *str)
{
	while (*str)
	{
		if (*str == '\n')
			printf("=");
		else
			printf("%c", *str);
		str++;
	}
}

char	*get_next_line(int fd)
{
	char		*buf;
	static char	*stash;
	char 		*line;
	int 		buf_size;

	buf_size = 7;
	buf = (char *)malloc(7 * sizeof(char));
	if (fd > 0)
		read(fd, buf, buf_size);
	_fill_line(buf, &line, &stash);
	//_print_str_es(line);
	_print_str_es(stash);
	return line;
}



