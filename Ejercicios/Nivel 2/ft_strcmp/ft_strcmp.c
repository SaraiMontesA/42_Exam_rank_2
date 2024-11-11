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

	while (s1[index])
		if (s1[index] == s2[index])
			index++;
		else
			return (s1[index] - s2[index]);
		index++;
	return (index);
}

# include <stdio.h>	// Hace falta para el printf

int main()
{
	char	*s1;
	char	*s2;
	int		result;

	s1 = "Hello";
	s2 = "Hello";

	result = ft_strcmp(s1, s2);
	
	printf("\n");
	if (result == 0)
		printf("Las cadenas son iguales");
	else if (result > 0)
		printf("La primera cadena es mayor que la segunda");
	else
		printf("La primera cadena es menor que la segunda");
	printf("\n\n");

	return (0);
}
/*
*/
