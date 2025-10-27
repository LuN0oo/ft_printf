/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:44:37 by analaphi          #+#    #+#             */
/*   Updated: 2025/10/24 17:55:47 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_strlen(char *s);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putnbr_base(long n, char *base);
int		ft_print_pointer(void *ptr);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_printf(const char *str, ...);

#endif