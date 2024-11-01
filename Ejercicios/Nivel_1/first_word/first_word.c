/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:21:49 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/01 19:17:15 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena y muestre su primera palabra,
seguida de un salto de línea.

Una palabra es una sección de la cadena delimitada por espacios/tabulaciones o 
por el inicio/final de la cadena.

Si el número de parámetros no es 1, o si no hay palabras, simplemente muestra un salto de línea.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/

#include <unistd.h> // Hace falta para write
// #include <stdio.h> // Hace falta para printf

char	*ft_first_word(char *s1)
{
	int	index;
	int word;

	index = 0;
	word = 0;

	// printf("\n");
	// printf("Estoy dentro de first word 1\n");
	// printf("\n");

	while (s1[index])
	{
		//mientras no sea una letra avanzamos
		while (s1[index] == ' ' || s1[index] == '\t')
		{
			if (word = 0)
				index++;
			if (word = 1)
			{
				s1[index] = '\0';
				break;				
			}
		}

		// si el caracter es una letra
		while (s1[index] != ' ' && s1[index] != '\t' && s1[index] != '\0')
		{
			word = 1;
			write(1, &s1[index], 1);
			index++;
		}
	}
	//write(1,"\n", 1);
	return (s1);
}

int	main(int argc, char **argv)
{

	// printf("\n");
	// printf("Estoy dentro de main 1\n");
	// printf("\n");

	if (argc >= 2)
	{
		// printf("Estoy dentro de main 2\n");
		// printf("\n");
		ft_first_word(argv[1]);
		// printf("Estoy dentro de main 3\n");
		// printf("\n");
	}
	// printf("Estoy dentro de main 4\n");
	// printf("\n");
	write(1, "\n", 1);
	return (0);
}
