/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:21:49 by sarmonte          #+#    #+#             */
/*   Updated: 2024/10/21 13:06:40 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays a string on the standard output.
Escribe una función que muestre una cadena en la salida estándar.

The pointer passed to the function contains the address of the string's first
character.
El puntero pasado a la función contiene la dirección del primer carácter de
la cadena.

Your function must be declared as follows:
void	ft_putstr(char *str);
*/

# include <unistd.h>

int	ft_putstr(char *str)
{
	int	index;

	index = 0;

	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}

	return (index);
}

/*
# include <stdio.h>	// Hace falta para el printf

int main()
{
	printf("\n");

	ft_putstr("Hello");

	printf("\n\n");
	printf("La cadena se ha imprimido");
	printf("\n\n");

	return (0);
}
*/
