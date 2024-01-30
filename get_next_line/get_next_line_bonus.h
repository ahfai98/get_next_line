/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:11:39 by jyap              #+#    #+#             */
/*   Updated: 2023/11/17 11:38:56 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H

# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*ft_strcomb(char *dst, char *src);
int		checkend(char c);
int		ft_strlen(char *str);
int		check_nl(char *str);
char	*get_next_nl(int fd, char *output);
char	*get_read(char *input);
char	*savepoint(char *input);
char	*get_next_line(int fd);

#endif
