/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashcode.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 10:36:48 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/28 12:11:00 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHCODE_H
# define HASHCODE_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "./libft/libft.h"

typedef struct photos {
	int index;
	int	ntag;
//	char orient;
//	int n_tag;
//	char *tags;
} photo;

#define TRUE 1
#define FALSE 0

#endif
