/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:10:06 by andcardo          #+#    #+#             */
/*   Updated: 2025/05/05 17:08:42 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (size == 0 || nmemb == 0)
	{
		ptr = malloc(1);
		return (ptr);
	}
	total_size = nmemb * size;
	// checkar overflow - 2 biliões
	ptr = (void *)malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

/*
int	main(void)
{
	printf("Hello from main\n");
	char *str = (char *)ft_calloc(30, 1);
	int i = 0;
	while (i < 30)
	{
		printf("p[%i] = %p\t", i, str);
		printf("%i\n", *str);
		i++;
		str++;
	}
}
 */
