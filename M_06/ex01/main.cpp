/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudhir <hboudhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:47:23 by hboudhir          #+#    #+#             */
/*   Updated: 2021/12/23 18:26:50 by hboudhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main( void )
{
	uintptr_t serializedPtr;
	Data *deserializedPtr = new Data();
	
	deserializedPtr->setData(10, "HelloooO!");
	deserializedPtr->getData();
	
	std::cout << "First addess of Data pointer:                        " << deserializedPtr << std::endl;
	serializedPtr = serialize(deserializedPtr);
	std::cout << "The value in the uintptr_t variable :                " << serializedPtr << std::endl;
	deserializedPtr = deserialize(serializedPtr);
	std::cout << "The value in the Data pointer after deserialization: " << deserializedPtr << std::endl;
	deserializedPtr->getData();
	
	return (0);
}