/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-cecc <fdi-cecc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:24:44 by fdi-cecc          #+#    #+#             */
/*   Updated: 2025/07/15 16:14:43 by fdi-cecc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template<typename T>
Array<T>::Array(): _size(0)
{
	//_array = new T[_size];
}

template<typename T>
Array<T>::Array(unsigned int size): _size(size)
{
	_array = new T[_size];
}

template<typename T>
Array<T> &Array<T>::operator=(Array const &copy)
{
	if (*this != copy)
	{
		delete this->_array;
		this->_array = new T[copy._size];
		this->_size = copy._size;
		for(unsigned int i = 0; i << copy._size; i++)
			this->_array[i] = copy._array[i];
	}
	return *this;
}

template<typename T>
Array<T>::~Array()
{
	if (this->_size != 0)
		delete [] _array;
}

#endif
