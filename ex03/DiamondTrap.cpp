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
DiamondTrap::DiamondTrap( void ) : ClapTrap("PROTO_clap_name"), ScavTrap(), FragTrap(), _name("PROTO")
{
	this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "Default constructor called. DiamondTrap " << this->_name << " was created." << std::endl;
}

// Parametric constructor
DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "Constructor called. DiamondTrap " << this->_name << " was created." << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap( DiamondTrap const &other) : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

// Copy assignment operator
DiamondTrap& DiamondTrap::operator=(DiamondTrap const &other)
{
    if (this != &other)
    {
        this->_name = other._name;
		ClapTrap::operator=(other);
		ScavTrap::operator=(other);
		FragTrap::operator=(other);
    }
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
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
	std::cout << "I am " << this->_name  << " and my ClapTrap name is " << ClapTrap::_name << "." << std::endl;
}
