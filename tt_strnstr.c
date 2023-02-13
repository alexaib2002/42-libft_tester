/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexaib <alexaib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:07:46 by alexaib           #+#    #+#             */
/*   Updated: 2023/02/15 19:50:58 by alexaib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

char *base = "aaasdfasdf";

void	tt_maxval(void)
{
	if (ft_strnstr(base, "aasdf", -1) == base + 1)
		printf("strnstr works with max size of size_t\n");
}

void	tt_stdinput(void)
{
	if (ft_strnstr(base, "a", strlen(base)) == strnstr(base, "a", strlen(base)))
		printf("Standard input 1 works!\n");
	if (ft_strnstr(base, "df", strlen(base))
		== strnstr(base, "df", strlen(base)))
		printf("Standard input 2 works!\n");
	if (ft_strnstr(base, "\0", strlen(base)) == strnstr(base, "\0", strlen(base)))
		printf("Standard input 3 works!\n");
	if (ft_strnstr(base, "", strlen(base)) == strnstr(base, "", strlen(base)))
		printf("Standard input 4 works!\n");
	// Other cases
	char *big1 = "abcdefgh";
	if (ft_strnstr(big1, "abc", 3) == strnstr(big1, "abc", 3))
		printf("Standard input 5 works!");
}

void	tt_edgecases(void)
{
	const char	*little = "HELLO";
	if (ft_strnstr(little, little, ft_strlen(little)) == strnstr(little, little, ft_strlen(little)))
		printf("Able to find little when passed as both args!");
}

void	tt_strnstr(void)
{
	printf("=== Now testing strnstr ===\n");
	tt_stdinput();
	tt_maxval();
}