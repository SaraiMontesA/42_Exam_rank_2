/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:57:53 by marvin            #+#    #+#             */
/*   Updated: 2024/10/21 15:57:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Subject

Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);
*/

int	ft_strcmp(char *s1, char *s2)
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
