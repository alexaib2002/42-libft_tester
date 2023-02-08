/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexaib <alexaib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:20:00 by aaibar-h          #+#    #+#             */
/*   Updated: 2023/02/09 00:08:52 by alexaib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	tt_max_size_t(void)
{
	const char	*src = "libft";
	size_t		ss_res;
	size_t		ft_res;
	char		*ss_dest;
	char		*ft_dest;

	ft_dest = malloc(10);
	ss_dest = malloc(10);
	ft_dest = memset(ft_dest, 'A', 10 * sizeof(char));
	ss_dest = memset(ss_dest, 'A', 10 * sizeof(char));
	ft_res = ft_strlcpy(ft_dest, src, -1);
	ss_res = ft_strlcpy(ss_dest, src, -1);
	printf("ft: %li\tss: %li\n", ft_res, ss_res);
	printf("eq: %i\tstrcmp: %i\tdest[..]: %i\n", ft_res == strlen(src),
		!strcmp(src, ft_dest), ft_dest[strlen(src) + 1] == 'A');
	free(ft_dest);
	free(ss_dest);
}

void	tt_strlcpy(void)
{
	tt_max_size_t();
}
