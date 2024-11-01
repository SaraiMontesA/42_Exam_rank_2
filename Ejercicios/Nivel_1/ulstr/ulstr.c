/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:21:49 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/01 11:37:32 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ulstr
Expected files   : ulstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena y cambie la mayúscula por minúscula y
viceversa para todas sus letras.

Los demás caracteres permanecen sin cambios.

You must display the result followed by a '\n'.
Debes mostrar el resultado seguido de un '\n'.

If the number of arguments is not 1, the program displays '\n'.
Si el número de argumentos no es 1, el programa muestra '\n'.

Examples :
$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent 
VAnIte et auto-justification."
  | cat -e l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT 
  vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  "
| cat -e s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$
*/
#include <unistd.h> // Hace falta para write

int	ft_invertcase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] = str[index] + 32;
		else if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = str[index] - 32;
		write(1, &str[index], 1);
		index++;
	}
	return (index);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_invertcase(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
/*
*/
