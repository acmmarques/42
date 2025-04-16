/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:07:18 by andcardo          #+#    #+#             */
/*   Updated: 2025/04/16 16:13:56 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	main(void)
{
	printf("a -> %d\n", ft_isdigit('a'));
	printf("2 -> %d\n", ft_isdigit('2'));
	printf("%% -> %d\n", ft_isdigit('%'));
	printf("9 -> %d\n", ft_isdigit('9'));
	printf("0 -> %d\n", ft_isdigit('0'));
	printf("1 -> %d\n", ft_isdigit('1'));
	printf("@ -> %d\n", ft_isdigit('@'));
}
