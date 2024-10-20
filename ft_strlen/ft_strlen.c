/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:21:49 by sarmonte          #+#    #+#             */
/*   Updated: 2024/10/20 17:32:14 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);
*/
# include <unistd.h>

int	ft_strlen(char *str)
{
    int index;

    index = 0;

    while (str[index])
        index++;
    return (index);
}

int main()
{
    int len;
    
    len = ft_strlen("Hello");

    write (1, &len, 1);
    
    return (0);
}