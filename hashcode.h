/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashcode.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 10:36:48 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/28 11:16:36 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHCODE_H
# define HASHCODE_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct photos {
	int index;
	char orient;
	int n_tag;
	char *tags;
} photo;

#define True 1
#define False 0

#endif
