/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:09:28 by andcardo          #+#    #+#             */
/*   Updated: 2025/04/30 09:29:16 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *one;
	const unsigned char *two;

	if (n == 0)
		return (0);
	one = (const unsigned char *)s1;
	two = (const unsigned char *)s2;
	if (*one != *two)
		return (*one - *two);
	while (*one == *two & n > 0)
		{
			one++;
			two++;
			n--;
			if (*one != *two && n > 0)
				return (*one - *two);
		}
	return (0);
}

/*
int	main(void)
{
	int c = ft_memcmp("", "test", 4);
	printf("c: %d\n", c);
}
*/
