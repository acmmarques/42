/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:50:34 by andcardo          #+#    #+#             */
/*   Updated: 2025/04/21 15:54:00 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr; 
	unsigned char d;

	d = c;
	ptr = s;
	while(ptr && n > 0)
	{
		*ptr = d;
		n--;
		ptr++;
	}
	return s;
}
