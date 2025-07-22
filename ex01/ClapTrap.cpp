/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:53:46 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/21 13:53:50 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap( void )
	: _name("PROTO-00"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "Default constructor called. ClapTrap " << this->_name << " was created." << std::endl;
}

// Parametric constructor
ClapTrap::ClapTrap( std::string name )
	: _name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
    std::cout << "Parametric constructor called. ClapTrap " << this->_name << " was created." << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap( ClapTrap const &other )
{
    std::cout << "ClapTrap copy constructor called." << std::endl;
    *this = other;
}

// Copy assignment operator
ClapTrap&   ClapTrap::operator=( ClapTrap const &other )
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap copy assignment operator called." << std::endl;
	return (*this);
}

// Destructor
ClapTrap::~ClapTrap( void )
{
    std::cout << "Destructor called. ClapTrap " << this->_name << " was destroyed." << std::endl;
}

// Member functions
void    ClapTrap::attack( const std::string& target )
{
    if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " cannot attack. It's dead!" << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " cannot attack. No Energy Points left!" << std::endl;
	else
    {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void    ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints == 0)
		std::cout << this->_name << " cannot take any more damage. It's already dead!" << std::endl;
	else
	{
		std::cout << this->_name << " takes " << amount << " points of damage!" << std::endl;
		if (amount >= this->_hitPoints)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
	}
}

void    ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitPoints == 0)
		std::cout << this->_name << " cannot repair. It's dead!" << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << this->_name << " cannot repair. No Energy Points left!" << std::endl;
	else
	{
		std::cout << this->_name << " repairs itself, regaining " << amount << " Hit Points!" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
}

// Getters
std::string	ClapTrap::getName( void ) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints( void ) const
{
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints( void ) const
{
	return (this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage( void ) const
{
	return (this->_attackDamage);
}
