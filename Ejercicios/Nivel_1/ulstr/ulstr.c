/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:21:49 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/01 11:07:26 by sarmonte         ###   ########.fr       */
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
$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$
*/

# include <unistd.h> // Hace falta para write

int	ft_invertCase(char *str)
{
	int	index;

	index = 0;

	while (str[index])
	{
		//Si es mayus poner minúscula
		if (str[index] >= 65 && str[index] <= 90)
			str[index] = str[index] + 32;
		//Si es minus poner mayus
		if (str[index] >= 97 && str[index] <= 122)
			str[index] = str[index] - 32;

		index++;
	}

	return (index);
}

int main(argc, char **argv)
{
	printf("\n");

	ft_putstr("Hello");

	printf("\n\n");
	printf("La cadena se ha imprimido");
	printf("\n\n");

	return (0);
}
/*
*/
