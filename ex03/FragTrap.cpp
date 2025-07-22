/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:55:21 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/21 13:55:23 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

unsigned int const	FragTrap::defaultHitPoints = 100;
unsigned int const	FragTrap::defaultEnergyPoints = 100;
unsigned int const	FragTrap::defaultAttackDamage = 30;

// Default constructor
FragTrap::FragTrap( void ) : ClapTrap("FRAG-00")
{
    this->_hitPoints = FragTrap::defaultHitPoints;
    this->_energyPoints = FragTrap::defaultEnergyPoints;
    this->_attackDamage = FragTrap::defaultAttackDamage;
    std::cout << "Default constructor called. FragTrap " << this->_name << " was created." << std::endl;
}

// Parametric constructor
FragTrap::FragTrap( std::string const &name ) : ClapTrap(name)
{
    this->_hitPoints = FragTrap::defaultHitPoints;
    this->_energyPoints = FragTrap::defaultEnergyPoints;
    this->_attackDamage = FragTrap::defaultAttackDamage;
    std::cout << "Parametric constructor called. FragTrap " << this->_name << " was created." << std::endl;
}

// Copy constructor
FragTrap::FragTrap( FragTrap const &other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called." << std::endl;
}

// Copy assignment operator
FragTrap&   FragTrap::operator=(FragTrap const &other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "FragTrap copy assignment operator called." << std::endl;
    return (*this);
}

// Destructor
FragTrap::~FragTrap( void )
{
    std::cout << "Destructor called. FragTrap " << this->_name << " was destroyed." << std::endl;
}

// Member function
void    FragTrap::highFivesGuys( void )
{
    if (this->_hitPoints == 0)
        std::cout << "FragTrap " << this->_name << " cannot high-five. It's dead!" << std::endl;
    else
        std::cout << "FragTrap " << this->_name << " wants an high-five!" << std::endl;
}
