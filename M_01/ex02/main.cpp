/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:21:31 by hboudhir          #+#    #+#             */
/*   Updated: 2021/11/26 18:05:49 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	
	(void)stringPTR;
	std::cout << "Address of the string using [str]       : " << &str << std::endl;
	std::cout << "Address of the string using [stringREF] : " << &stringREF << std::endl;
	std::cout << "Address of the string using [stringPTR] : " << stringPTR << std::endl;
	std::cout << std::endl << "=============================================================" << std::endl << std::endl;
	std::cout << "[str] value using [stringREF]  : " << stringREF << std::endl;
	std::cout << "[str] value using [stringPTR]  : " << *stringPTR << std::endl << std::endl;
}
/*
int a = 21;
int* aPTR = &a;
int& aREF = a; // v

aREF = a; // x
==> a = 21
a = 42;
==> aREF = 42
aPTR = <address>;
*aPTR ==> <value address &a> ==> a

*/