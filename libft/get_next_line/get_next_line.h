/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:28:47 by cjulienn          #+#    #+#             */
/*   Updated: 2022/04/01 19:36:00 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef	BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# include <stdlib.h>
# include <unistd.h>
# include "../libft_vanilla.h"
# include "../functions_added/functions_added.h"

char	*get_next_line(int fd);
char	*ft_output(ssize_t reader, char	**line, int iter);
char	*ft_cut_rtn(const char *line);
char	*ft_cut_line(ssize_t reader, char *line);
char	*manage_errors(int fd);

#endif
