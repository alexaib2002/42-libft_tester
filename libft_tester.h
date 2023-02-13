/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tester.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexaib <alexaib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:32:00 by aaibar-h          #+#    #+#             */
/*   Updated: 2023/02/15 19:41:45 by alexaib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TESTER_H
# define LIBFT_TESTER_H
# include <stdlib.h>
# include <string.h>
# include <bsd/string.h>
# include <stdio.h>
# include <libft.h>

// Strings
void	tt_strings(void);
void	tt_substr(void);
void	tt_strnstr(void);
void	tt_strlcpy(void);
void	tt_strlcat(void);

// Bonus module
void	tt_general_list(void);
void	tt_nulled_list(void);
void	tt_listmap(void);

#endif
