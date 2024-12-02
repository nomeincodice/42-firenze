/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciapett <fciapett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:21:45 by fciapett          #+#    #+#             */
/*   Updated: 2024/12/02 09:41:01 by fciapett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int    ft_strlcpy(char *dest, const char *src, int size)
{
        int i;
        int j;
        
        i = 0;
        j = 0;
        while (src[j] != '\0')
        {
                j++;
        }
        if (j == 0)
                return (j);
        
        while(i < size - 1 && src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        dest[j] = '\0';
        return (j);
}
/* int main()
{
    char *dest = malloc(10);
    const char *src = "Ciao come stai";
    int num = 3;
    printf("%d\n", ft_strlcpy(dest, src, num)); 
    return (0);
    free(dest);
} */