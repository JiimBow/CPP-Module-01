/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:44:02 by jodone            #+#    #+#             */
/*   Updated: 2026/04/23 09:18:29 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void	lineCopyReplace(const std::string s1, const std::string s2, std::string* line)
{
	
	size_t iterator = 0;
	
	while ((iterator = line->find(s1)) != std::string::npos)
	{
		line->erase(iterator, s1.length());
		line->insert(iterator, s2);
		iterator += s2.length();
	}
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "You must give 3 arguments !\n";
		return 1;
	}
	
	const std::string filename = av[1];
	const std::string s1 = av[2];
	const std::string s2 = av[3];
	
	std::ifstream infile(filename.c_str());
	if (!infile)
	{
		std::cout << "The filename is incorrect" << std::endl;
		return 1;
	}
	
	std::string	outfileName = filename + ".replace";
	std::ofstream outfile(outfileName.c_str());
	std::string	line;

	while (getline(infile, line))
	{
		lineCopyReplace(s1, s2, &line);
		outfile << line;
		if (!infile.eof())
			outfile << "\n";
	}

	return 0;
}
