/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liebe.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 03:58:53 by shahn             #+#    #+#             */
/*   Updated: 2022/04/04 03:58:57 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIEBE_H
# define LIEBE_H
# define BUFFER_SIZE 2048
# include <unistd.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_display_file(char *filename);
#endif
