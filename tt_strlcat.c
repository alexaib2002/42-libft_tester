/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexaib <alexaib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 23:54:34 by aaibar-h          #+#    #+#             */
/*   Updated: 2023/02/09 23:31:12 by alexaib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	tt_strlcat()
{
	char		dest[30];
	const char	*src = "AAAAAAAAA";
	int			res;

	printf("*** Testing strlcat functionality ***\n");
	memset(dest, 0, 30);
	memset(dest, 'C', 5);
	res = ft_strlcat(dest, src, -1);
	if (res == 14)
		printf("Correct return value\n");
	if (strcmp(dest, "CCCCCAAAAAAAAA"))
		printf("Correct destination value\n");
}
