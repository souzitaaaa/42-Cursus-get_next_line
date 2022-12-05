/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:21:45 by dinoguei          #+#    #+#             */
/*   Updated: 2022/11/26 01:22:08 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_strjoin(char *str, const char *str2);
size_t	ft_strlen(char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*get_next_line(int fd);
char	*ft_strchr(const char *str, int c);
char	*read_file(int fd, char *backup);
char	*get_line(char *backup);
char	*remove_read(char *backup);

#endif
