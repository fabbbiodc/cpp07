/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-cecc <fdi-cecc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:25:27 by fdi-cecc          #+#    #+#             */
/*   Updated: 2025/07/15 12:47:19 by fdi-cecc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T *array, size_t array_len, void (*foo)(T &))
{
	if (array == NULL || foo == NULL)
		return ;
	for (size_t i = 0; i < array_len; i++)
		foo(array[i]);
	return;
}

#endif
