/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:52:10 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/21 13:53:30 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
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

    std::cout << robotC.getName() << " starts with " << robotC.getHitPoints() << " HP and " << robotC.getEnergyPoints() << " EP." << std::endl;
    robotC.takeDamage(10);
    std::cout << robotC.getName() << " has now " << robotC.getHitPoints() << " HP and " << robotC.getEnergyPoints() << " EP." << std::endl;
    robotC.attack("JINZO");
    std::cout << std::endl;

    return (0);
}
