/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:48:08 by andcardo          #+#    #+#             */
/*   Updated: 2025/04/27 14:04:38 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	/*
	*/
	while (s1[i] == s2[i] && i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		printf("s1[%zu]=%c\t", i, s1[i]);
		printf("s2[%zu]=%c\t", i, s2[i]);
		printf("\n");
		i++;
	}
	return (s1[i] - s2[i]);	
}

int main(void)
{
	char *one = "abcdefgh";
	char *two = "abcdwxyz";
	int a = ft_strncmp(one, two, 4);
	printf("dif->%d\n", a);
}
/*
 */
