/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciapett <fciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:57:49 by fciapett          #+#    #+#             */
/*   Updated: 2024/12/02 10:05:20 by fciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int  ft_strlcat(char *dest, const char *src, int size)
{
        strlen(dest);
        strlen(src);

        
}

int main()
{
    char dest[6] = "Hello";
    const char *src = "World";
    int num = 3;
    printf("%d\n", ft_strlcat(dest, src, num)); 
    return (0);
}