/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:25:51 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/25 00:28:28 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lower case to upper case letter conversion

int ft_toupper(int  c)
{
    if (c >= 'a' && c <= 'z')
        return(c - 32);
    return (c);
}
