/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-cecc <fdi-cecc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:24:44 by fdi-cecc          #+#    #+#             */
/*   Updated: 2025/07/15 17:22:52 by fdi-cecc         ###   ########.fr       */
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

template <typename T>
Array<T>::Array(Array const &copy): _array(new T[copy.size()]), _size(copy.size())
{
	for(unsigned int i = 0; i < _size; i++)
		_array[i] = copy._array[i];
}


template<typename T>
Array<T> &Array<T>::operator=(Array const &copy)
{
	if (this->_size != 0)
		delete this->_array;
	this->_array = new T[copy.size()];
	this->_size = copy.size();
	for(unsigned int i = 0; i < copy.size(); i++)
		this->_array[i] = copy._array[i];
	return *this;
}

template<typename T>
Array<T>::~Array()
{
	if (this->_size != 0)
		delete [] _array;
}

template <typename T>
T &Array<T>::operator[](unsigned int i) const
{
	return _array[i];
}


template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

template <typename T>
std::ostream &operator<<(std::ostream &out, const Array<T> &array)
{
	for (unsigned int i = 0; i < array.size(); i++)
		out << array[i];
	return out;
}


#endif
