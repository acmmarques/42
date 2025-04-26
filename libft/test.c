/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:57:38 by andcardo          #+#    #+#             */
/*   Updated: 2025/04/23 16:27:04 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char str[10];
	char dest[10];
	char *src = "what up?";
	char str_memmove[] = "hello";
	char dest_lcpy[10];

	ft_memset(str, 'a', 5);
	printf("string -> %s\n", str);
	ft_memset(str+5, 'b', 5);
	printf("string -> %s\n", str);
	ft_bzero(str+4, 6);
	printf("[after bzero] string -> %s\n", str);
	printf("dest before ->%s\n", dest);
	ft_memcpy(dest, src, 12);
	printf("dest after ->%s\n", dest);
	ft_memcpy(NULL, NULL, 0);
	printf("[memmove] str_memmove before fn call ->%s \n", str_memmove);
	ft_memmove(str_memmove+2, str_memmove, 3);
	printf("[memmove] str_memmove after fn call ->%s \n", str_memmove);
	ft_strlcpy(dest_lcpy, "hello", 3);	
	printf("[strlcpy] dest after fn -> %s\n", dest_lcpy);
	ft_strlcpy(dest_lcpy, "lorem ipsum catulus maximus", 22);
	printf("[strlcpy] dest after fn -> %s\n", dest_lcpy);
	printf("[toupper] c-> %c\n", ft_toupper('c'));
	char *charptr = ft_strchr("atumzinhoc", '\0');
	printf("[strchr] -> %p\n", charptr);
	printf("[strchr] -> %c\n", *charptr);
}
