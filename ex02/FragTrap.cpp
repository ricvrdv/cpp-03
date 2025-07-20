#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap( void ) : ClapTrap("FRAG-00")
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "Default constructor called. FragTrap " << this->_name << " was created." << std::endl;
}

// Parametric constructor
FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "Constructor called. FragTrap " << this->_name << " was created." << std::endl;
}

// Copy constructor
FragTrap::FragTrap( FragTrap const &other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}

// Copy assignment operator
FragTrap&   FragTrap::operator=(FragTrap const &other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    return (*this);
}

// Destructor
FragTrap::~FragTrap( void )
{
    std::cout << "Destructor called. FragTrap " << this->_name << " was destroyed." << std::endl;
}

// Member functions
void    FragTrap::attack( const std::string &target )
{
    if (this->_hitPoints == 0)
		std::cout << "FragTrap " << this->_name << " cannot kick anyone. It's dead!" << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "FragTrap " << this->_name << " cannot kick anyone. No Energy Points left!" << std::endl;
	else
    {
		std::cout << "FragTrap " << this->_name << " kicks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void    FragTrap::highFivesGuys( void )
{
    if (this->_hitPoints == 0)
        std::cout << "FragTrap " << this->_name << " cannot high-five. It's dead!" << std::endl;
    else
        std::cout << "FragTrap " << this->_name << " wants an high-five!" << std::endl;
}