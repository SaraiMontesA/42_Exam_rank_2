/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:21:49 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/01 09:30:56 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
*/

int	ft_strlen(char *str)
{
	int	index;

	index = 0;

	while (str[index])
		index++;
	return (index);
}

/*
# include <stdio.h>	// Hace falta para el printf

int main()
{
	int	len;

	len = ft_strlen("Hello");

	printf("\n");
	printf("La cadena proporcionada mide %d caracteres", len);
	printf("\n\n");

	return (0);
}
*/
