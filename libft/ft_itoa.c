/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:40:13 by andcardo          #+#    #+#             */
/*   Updated: 2025/05/08 12:32:24 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

static char	*invert_str(const char *s, int nb_size)
{
	int		i;
	char	*new_str;

	i = 0;
	new_str = (char *)malloc(sizeof(char) * (nb_size + 1));
	while (nb_size >= 0)
	{
		new_str[i] = s[nb_size];
		i++;
		nb_size--;
	}
	new_str[i] = '\0';
	return (new_str);
}

static	int	find_nb_of_digits(int n)
{
	int	digit_nb;

	digit_nb = 1;
	while (n > 9)
	{
		digit_nb ++;
		n /= 10;
	}
	return (digit_nb);
}

char	*ft_itoa(int n)
{
	int		i;
	int		digit_nb;
	char	*inverted;

	// checkar o biggest int;
	// checkar se é negativo transformar em unsigned int;

	n = (unsigned int)n;
	i = 0;
	printf("nb: %i\n", n);
	digit_nb = find_nb_of_digits(n);
	printf("nb: %i\n", digit_nb);
	inverted = malloc(10);
	while (n > 9)
	{
		inverted[i] = n % 10 + 48;
		n /= 10;
		i++;
	}
	inverted[i] = n % 10 + 48;
	return (invert_str(inverted, i));
}

int	main(void)
{
	char *str = ft_itoa(-12041234);
	printf("%s\n", str);
}


