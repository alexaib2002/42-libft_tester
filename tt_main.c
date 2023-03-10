/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexaib <alexaib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:40:25 by aaibar-h          #+#    #+#             */
/*   Updated: 2023/02/08 21:38:26 by alexaib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	tt_bonus(void)
{
	tt_general_list();
	tt_nulled_list();
	tt_listmap();
}

void	tt_common(void)
{
	tt_strings();
}

int	main(void)
{
	tt_common();
	tt_bonus();
	return (0);
}
