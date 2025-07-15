/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-cecc <fdi-cecc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:25:25 by fdi-cecc          #+#    #+#             */
/*   Updated: 2025/07/15 13:05:22 by fdi-cecc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cstring>

void addOne(int &x)
{
	x += 1;
	return;
}

template <typename T, size_t N>
size_t arrayLen(T (&array)[N])
{
	(void)array;
	return N;
}

int main()
{
	int array[] = {1, 2, 3 , 4 , 5};
		
	for(size_t i = 0; i < arrayLen(array); i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
	
	iter(array, arrayLen(array), addOne);
	
	for(size_t i = 0; i < arrayLen(array); i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;

}
