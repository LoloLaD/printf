/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 12:10:08 by lfourmau          #+#    #+#             */
/*   Updated: 2021/01/04 10:35:20 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

typedef struct	s_struct
{
	va_list ap;
	char	*toprint; //la chaine resultat, pour la balader d'une fct a l'autre ?
	int		flags[5]; //tableau avec 1index pour chaque flag (5 car c'est le nb max de flags)
	int		width; //recuperer a la sortie de parse width ?
	int		precision; //recup sortie de parse precision ?
	char	spec; //recup le spec pour utiliser dans des conditions ?
	int		nbcaracs; //connaitre le nb de carac imprimes pour gerer le nombre de 0 ect
}				t_struct;


 int		ft_isspec(char c);
 int		ft_isflag(char c);
void 		parse_total(char *toparse, t_struct *ptr);
char		*convert_all(argument, t_struct *ptr);
void		final_print();
void		app_flags(structure, t_struct *ptr);


#endif
