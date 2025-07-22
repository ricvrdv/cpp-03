/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:55:36 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/21 13:55:38 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	{
		std::cout << std::endl << "[ CLAPTRAP ]" << std::endl;
		ClapTrap    robotA;
   		ClapTrap    robotB("HELLRAISER");
    	ClapTrap    robotC(robotA);
    	ClapTrap    robotD;

    	robotD = robotB;

    	std::cout << std::endl << robotB.getName() << " starts with " << robotB.getHitPoints() << " HP and " << robotB.getEnergyPoints() << " EP." << std::endl;
    	robotB.attack("JINZO");
    	robotB.takeDamage(5);
    	std::cout << robotB.getName() << " has now " << robotB.getHitPoints() << " HP and " << robotB.getEnergyPoints() << " EP." << std::endl;
    	robotB.beRepaired(5);
    	std::cout << robotB.getName() << " has now " << robotB.getHitPoints() << " HP and " << robotB.getEnergyPoints() << " EP." << std::endl << std::endl;
    	std::cout << std::endl;
	}
	{
		std::cout << std::endl << "[ Press ENTER to continue to SCAVTRAP test... ]" << std::endl;
		std::cin.get();

		std::cout << "[ SCAVTRAP ]" << std::endl;
		ScavTrap	robotA;
		ScavTrap	robotB("MEGATRON");
		ScavTrap	robotC(robotA);
		ScavTrap	robotD;

		robotD = robotB;

		std::cout << std::endl << robotB.getName() << " starts with " << robotB.getHitPoints() << " HP and " << robotB.getEnergyPoints() << " EP." << std::endl;
		robotB.attack("NEMESIS");
		robotB.takeDamage(70);
		std::cout << robotB.getName() << " has now " << robotB.getHitPoints() << " HP and " << robotB.getEnergyPoints() << " EP." << std::endl;
		robotB.beRepaired(40);
		std::cout << robotB.getName() << " has now " << robotB.getHitPoints() << " HP and " << robotB.getEnergyPoints() << " EP." << std::endl;
		robotC.guardGate();
		robotC.takeDamage(100);
		robotC.guardGate();
		std::cout << std::endl;
	}
	{
		std::cout << std::endl << "[ Press ENTER to continue to FRAGTRAP test... ]" << std::endl;
		std::cin.get();
		
		std::cout << "[ FRAGTRAP ]" << std::endl;
		FragTrap	robotA;
		FragTrap	robotB("BRAT");
		FragTrap	robotC(robotA);

		std::cout << std::endl << robotB.getName() << " starts with " << robotB.getHitPoints() << " HP and " << robotB.getEnergyPoints() << " EP." << std::endl;
		robotB.attack("WORM");
		robotB.takeDamage(50);
		robotB.beRepaired(20);
		robotB.highFivesGuys();
		robotA.attack("WORM");
		std::cout << std::endl;
	}
	return (0);
}
