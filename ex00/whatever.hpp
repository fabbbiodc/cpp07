/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-cecc <fdi-cecc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:31:18 by fdi-cecc          #+#    #+#             */
/*   Updated: 2025/07/15 11:43:45 by fdi-cecc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
T max(T a, T b)
{
	return ((a > b) ? a : b);
}

template <typename T>
T min(T a, T b)
{
	return ((a < b) ? a : b);
}

template <typename T>
void swap(T &a, T &b)
{
	T temp;
	temp = b;
	b = a;
	a = temp;
}

#endif
