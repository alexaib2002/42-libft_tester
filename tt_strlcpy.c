/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaibar-h <aaibar-h@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:20:00 by aaibar-h          #+#    #+#             */
/*   Updated: 2023/02/08 18:30:23 by aaibar-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	tt_strlcpy(void)
{
	const char	*src = "libft";
	char		*dest;

	dest = malloc(10 * sizeof(char));
	dest = memset(dest, 'A', 10 * sizeof(char));
	ft_strlcpy(dest, src, -1);
	free(dest);
}
