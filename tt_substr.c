/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaibar-h <aaibar-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:55:47 by aaibar-h          #+#    #+#             */
/*   Updated: 2023/02/09 23:00:51 by aaibar-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	tt_substr()
{
	if (*(ft_substr("hola", -1, -1)) == 0)
	{
		printf("Works with maximum params!\n");
	}
}