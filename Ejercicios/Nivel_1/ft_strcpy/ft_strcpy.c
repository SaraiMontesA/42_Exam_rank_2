/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:21:49 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/01 10:21:21 by sarmonte         ###   ########.fr       */
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

char	*ft_strcpy(char *s1, char *s2)
{
	int	index;

	index = 0;

	while (s2[index])
	{
		s1[index] = s2[index];
		index++;
	}
	s1[index] = '\0';
	return (s1);
}

/*
// Main para probar la función

# include <stdio.h>	// Hace falta para el printf

int main()
{
	//int	len;
	char s1[100] = "Cadena";
	char *s2 = "Cadenita";
	char *ret;

	printf("\n");
	printf("Datos iniciales");
	printf("\n\n");
	printf("Cadena 1: %s", s1);
	printf("\n");
	printf("Cadena 2: %s", s2);
	printf("\n");
	
	ret = ft_strcpy(s1, s2);

	printf("\n");
	printf("Datos modificados");
	printf("\n\n");
	printf("Cadena 1: %s", s1);
	printf("\n");
	printf("Cadena 2: %s", s2);
	printf("\n\n");

	return (0);
}
*/
