/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-cecc <fdi-cecc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:31:39 by fdi-cecc          #+#    #+#             */
/*   Updated: 2025/07/15 17:57:42 by fdi-cecc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> a;
	
	Array<int> b(5);
	b[0] = 1;
	b[1] = 3;
	b[2] = 4;
	b[3] = 8;
	b[4] = 10;

	Array<int> c(b);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;

	Array<int> d;
	d = c;
	std::cout << "d = " << d << std::endl;

	Array<std::string> e;
	Array<std::string> f(5);
	f[0] = "ciao";
	f[1] = "come";
	f[2] = "stai";
	f[3] = "tutto";
	f[4] = "bene";
	
	Array<std::string> g;
	g = f;
	
	Array<std::string> h(f);
	
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;
	std::cout << "g = " << g << std::endl;
	std::cout << "h = " << h << std::endl;

	try
	{
		std::cout << h[0] << std::endl;
		std::cout << h[6] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
