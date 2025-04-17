/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_libft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:57:38 by andcardo          #+#    #+#             */
/*   Updated: 2025/04/17 17:13:50 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int main()
{
	printf("r -> %d\n", ft_isalpha('r'));
	printf("r -> %d\n", ft_isascii('r'));
	printf("ç -> %d\n", ft_isascii(129));
	printf("ó -> %d\n", ft_isascii(-12));
}
