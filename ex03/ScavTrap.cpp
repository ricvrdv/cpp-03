/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:56:00 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/21 13:56:03 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

unsigned int const	ScavTrap::defaultHitPoints = 100;
unsigned int const	ScavTrap::defaultEnergyPoints = 50;
unsigned int const	ScavTrap::defaultAttackDamage = 20;

// Default constructor
ScavTrap::ScavTrap( void ) : ClapTrap("SCAV-00")
{
    this->_hitPoints = ScavTrap::defaultHitPoints;
    this->_energyPoints = ScavTrap::defaultEnergyPoints;
    this->_attackDamage = ScavTrap::defaultAttackDamage;
    std::cout << "Default constructor called. ScavTrap " << this->_name << " was created." << std::endl;
}

// Parametric constructor
ScavTrap::ScavTrap( std::string const &name ) : ClapTrap(name)
{
    this->_hitPoints = ScavTrap::defaultHitPoints;
    this->_energyPoints = ScavTrap::defaultEnergyPoints;
    this->_attackDamage = ScavTrap::defaultAttackDamage;
    std::cout << "Parametric constructor called. ScavTrap " << this->_name << " was created." << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap( ScavTrap const &other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called." << std::endl;
}

// Copy assignment operator
ScavTrap&	ScavTrap::operator=( ScavTrap const &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap copy assignment operator called." << std::endl;
	return (*this);
}

// Destructor
ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor called. ScavTrap " << this->_name << " was destroyed." << std::endl;
}

// Member functions
void	ScavTrap::attack( const std::string &target )
{
	if (this->_hitPoints == 0)
		std::cout << "ScavTrap " << this->_name << " cannot strike. It's dead!" << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "ScavTrap " << this->_name << " cannot strike. No Energy Points left!" << std::endl;
	else
    {
		std::cout << "ScavTrap " << this->_name << " strikes " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void	ScavTrap::guardGate( void )
{
	if (this->_hitPoints == 0)
		std::cout << "ScavTrap " << this->_name << " cannot guard the gate. It's dead!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}
