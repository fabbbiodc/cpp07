/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-cecc <fdi-cecc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:50:55 by fdi-cecc          #+#    #+#             */
/*   Updated: 2025/07/15 17:55:21 by fdi-cecc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const &copy);
		Array &operator=(Array const &copy);
		~Array();

		T &operator[](unsigned int i) const;
		
		unsigned int size() const;

		class BoundsException: public std::exception
		{
			public:
				virtual char const *what(void) const throw() {return "Out of array bounds";};
		};
};

template <typename T>
std::ostream &operator<<(std::ostream &out, const Array<T> &array);

#include "Array.tpp"

#endif
