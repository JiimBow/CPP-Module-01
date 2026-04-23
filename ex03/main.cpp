/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:12:43 by jodone            #+#    #+#             */
/*   Updated: 2026/04/22 16:40:49 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		Weapon sword = Weapon("Two-Handed sword");
		HumanA kaz("Kaz", sword);
		HumanB kliff("Kliff");

		kaz.attack();
		kliff.attack();
		kliff.setWeapon(sword);
		sword.setType("another sword");
		kaz.attack();
		kliff.attack();
	}
	return 0;
}