/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaibar-h <aaibar-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:40:25 by aaibar-h          #+#    #+#             */
/*   Updated: 2023/02/08 18:18:06 by aaibar-h         ###   ########.fr       */
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
	tt_bonus();
	return (0);
}
