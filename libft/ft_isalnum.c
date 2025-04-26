/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:48:06 by andcardo          #+#    #+#             */
/*   Updated: 2025/04/17 16:50:10 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c);
int	ft_isalpha(int c);

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
