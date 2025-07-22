/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:55:42 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/21 14:56:00 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap( void )
    : ClapTrap("PROTO_clap_name"),
    _name("PROTO")
{
	this->_hitPoints = FragTrap::defaultHitPoints;
    this->_energyPoints = ScavTrap::defaultEnergyPoints;
    this->_attackDamage = FragTrap::defaultAttackDamage;
    std::cout << "Default constructor called. DiamondTrap " << this->_name << " was created." << std::endl;
}

// Parametric constructor
DiamondTrap::DiamondTrap( std::string const &name )
    : ClapTrap(name + "_clap_name"),
    _name(name)
{
	this->_hitPoints = FragTrap::defaultHitPoints;
    this->_energyPoints = ScavTrap::defaultEnergyPoints;
    this->_attackDamage = FragTrap::defaultAttackDamage;
    std::cout << "Parametric constructor called. DiamondTrap " << this->_name << " was created." << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap( DiamondTrap const &other)
    : ClapTrap(other),
    ScavTrap(other),
    FragTrap(other),
    _name(other._name)
{
	this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    std::cout << "DiamondTrap copy constructor called." << std::endl;
}

// Copy assignment operator
DiamondTrap& DiamondTrap::operator=(DiamondTrap const &other)
{
    if (this != &other)
    {
		FragTrap::operator=(other);
        this->_name = other._name;
    }
	std::cout << "DiamondTrap copy assignment operator called." << std::endl;
    return (*this);
}

// Destructor
DiamondTrap::~DiamondTrap( void )
{
	std::cout << "Destructor called. DiamondTrap " << this->_name << " was destroyed." << std::endl;
}

// Member function
void	DiamondTrap::whoAmI( void )
{
	std::cout << "I am " << this->_name  << " and my ClapTrap name is " << ClapTrap::getName() << "." << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}