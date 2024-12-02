/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciapett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:37:10 by fciapett          #+#    #+#             */
/*   Updated: 2024/11/19 18:37:11 by fciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/* #include <stdio.h>
#include <ctype.h>

int     main()
{
        int d = '4';
        printf("%d\n", ft_isdigit(d));
        printf("%d\n", isdigit(d));
        return (0);
} */
