/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:37:24 by jodone            #+#    #+#             */
/*   Updated: 2026/04/22 14:19:05 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";

	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "string memory address : " << &string << std::endl;
	std::cout << "stringPTR memory address : " << stringPTR << std::endl;
	std::cout << "stringREF memory address : " << &stringREF << std::endl;

	std::cout << std::endl;
	
	std::cout << "string value : " << string << std::endl;
	std::cout << "stringPTR value : " << *stringPTR << std::endl;
	std::cout << "stringREF value : " << stringREF << std::endl;
}
