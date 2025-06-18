/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 16:58:42 by andcardo          #+#    #+#             */
/*   Updated: 2025/06/02 12:26:50 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strdup(const char *s1)
{
	size_t	str_len;
	char	*dest;

	str_len = ft_strlen(s1);
	dest = (char *)malloc((str_len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s1, str_len + 1);
	return (dest);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*substr_ptr;

	if (!s || len == 0 || start >= (unsigned int)ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > (unsigned long)ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr_ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr_ptr == NULL)
		return (NULL);
	ft_strlcpy(substr_ptr, s + start, len + 1);
	return (substr_ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	total_size;
	char	*concat_str;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	total_size = len_s1 + len_s2;
	concat_str = (char *)malloc(sizeof(char) * (total_size + 1));
	if (!concat_str)
		return (NULL);
	ft_memcpy(concat_str, s1, len_s1);
	ft_memcpy(concat_str + len_s1, s2, len_s2);
	concat_str[total_size] = '\0';
	return (concat_str);
}
