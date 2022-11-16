/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:04:54 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 04:48:28 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Printable characters starts from 32 TO 126
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

// int main()
// {
// 	printf("Mine %d\n", ft_isprint('4'));
// 	printf("Original %d", isprint('4'));
// }