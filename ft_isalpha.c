/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:41:41 by andcardo          #+#    #+#             */
/*   Updated: 2025/04/16 14:23:46 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	main(void)
{
	printf("a -> %d\n", ft_isalpha('a'));
	printf("N -> %d\n", ft_isalpha('N'));
	printf("0 -> %d\n", ft_isalpha('0'));
	printf("# -> %d\n", ft_isalpha('#'));
}
