/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexaib <alexaib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 23:54:34 by aaibar-h          #+#    #+#             */
/*   Updated: 2023/02/17 09:32:40 by alexaib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

/*
Inits the dest memory and fills it with random non-zero characters
Then, call the given strlcat implementation and return the result
*/
size_t	tt_strlcat_memtest(size_t f(char *, const char *, size_t),
	size_t dstsize, size_t dstfull, char *dest, char *src, size_t size)
{
	// Malloc dest and fill it with garbage bytes
	dest = malloc(dstsize * sizeof(char));
	memset(dest, 0, dstfull);
	memset(dest, 'A', dstsize);
	return (f(dest, src, size));
}

void	tt_maxsize(void)
{
	const char	*src = "mmmmmmmmm";
	char	*ft_dest;
	char	*sys_dest;
	size_t	ft_res;
	size_t	sys_res;

	ft_res = tt_strlcat_memtest(&ft_strlcat, 5, 30, ft_dest, src, -1);
	sys_res = tt_strlcat_memtest(&strlcat, 5, 30, sys_dest, src, -1);
	if (!memcmp(ft_dest, sys_dest, 30))
		printf("Maxsize memory works!");
	if (ft_res != sys_res)
		printf("My function returns a different value! ft: %li\texpected: %li",
			ft_res, sys_res);
}

void	tt_compare_with_syscall(size_t srcsize, size_t dstfull,
	char srcchar)
{
	char	*src;
	char	*ft_dest;
	char	*sys_dest;
	size_t	ft_res;
	size_t	sys_res;

	src = malloc(srcsize * sizeof(char));
	srcsize = memset(src, srcchar, srcsize);
	ft_res = tt_strlcat_memtest(&ft_strlcat, srcsize, dstfull, ft_dest, src, -1);
	sys_res = tt_strlcat_memtest(&strlcat, srcsize, dstfull, sys_dest, src, -1);
	if (!memcmp(ft_dest, sys_dest, dstfull))
		printf("Memory looks alright!\nft:\t%s\nsys:\t%s\n", ft_dest, sys_dest);
	if (ft_res != sys_res)
		printf("My function returns a different value! ft: %li\texpected: %li",
			ft_res, sys_res);
}

void	tt_stdtest(void)
{

}

void	tt_strlcat()
{
	printf("*** Testing strlcat functionality ***\n");
	printf("Testing maximum size on strlcat:\n");
	tt_stdtest();
	tt_maxsize();
}
