/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:57:53 by marvin            #+#    #+#             */
/*   Updated: 2024/11/02 11:21:27 by sarmonte         ###   ########.fr       */
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
	int result;
	int index;

	index = 0;
	result = 0;

	while (s1[index] || s2[index])
	{
		if (s1[index] != s2[index])
		{
			result = s1[index] - s2[index];
			return (result);
		}
		index++;
	}

	return (result);
}

# include <stdio.h>	// Hace falta para el printf

int main()
{
	char *s1 = "1214";
	char *s2 = "1214";
	int res;

	printf("\n");
	printf("Comparador de cadenas\n");
	printf("\n");
	printf("Cadenas proporcionadas");
	printf("\n\n");
	printf("     Cadena 1: %s\n", s1);
	printf("     Cadena 2: %s\n", s2);
	printf("\n");
	res = ft_strcmp(s1, s2);
	printf("     Resultado: %i\n\n", res);
	if (res == 0)
		printf("  Las cadenas son iguales\n");
	else if (res > 0)
		printf("  La cadena 1 es mayor\n");
	else
		printf("  La cadena 2 es mayor\n");
	printf("\n\n");
	
	return (0);
}
/*
*/
