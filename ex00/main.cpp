/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:04:14 by jodone            #+#    #+#             */
/*   Updated: 2026/04/21 16:31:53 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	Bob("Bob");
	Zombie	Jo("Jo");
	Zombie	Koko("Koko");
	
	Bob.announce();
	Jo.announce();
	Koko.announce();

	Zombie	*test = newZombie("test");
	test->announce();

	randomChump("random1");
	randomChump("random2");

	delete test;
}
