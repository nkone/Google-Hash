/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashcode.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 10:36:48 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/28 10:43:28 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHCODE_H
# define HASCODE_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct photo {
	int index;
	char orient;
	int n_tag;
	char *tags;
} photo;
