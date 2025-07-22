/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:51:49 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/21 14:53:44 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	std::cout << std::endl << "[ DIAMONDTRAP ]" << std::endl;
    DiamondTrap robotA("DIAMOND");
    DiamondTrap robotB;
    DiamondTrap robotC(robotB);

    std::cout << std::endl << robotA.getName() << " starts with " << robotA.getHitPoints() << " HP and " << robotA.getEnergyPoints() << " EP." << std::endl;
    robotA.whoAmI();
    robotA.attack("target");
    robotA.guardGate();
    robotA.highFivesGuys();
    robotA.takeDamage(100);
    std::cout << robotA.getName() << " has now " << robotA.getHitPoints() << " HP and " << robotA.getEnergyPoints() << " EP." << std::endl;
    robotA.guardGate();
    std::cout << std::endl;

	return (0);
}
