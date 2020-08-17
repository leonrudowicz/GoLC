/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v01.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrudowic <lrudowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 15:34:48 by lrudowic          #+#    #+#             */
/*   Updated: 2020/08/17 15:41:33 by lrudowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef V01_H
# define V01_H

# include <stdio.h>
# include <math.h>

void        printblock(const char *b, int size);
int         get_neighbours(const char *block, int px, int py, int size);
void        gen_heatmap(const char *block, char *res_block, int size);

#endif