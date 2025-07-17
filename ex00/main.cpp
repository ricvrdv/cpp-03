#include "ClapTrap.hpp"

int	main( void )
{
    {
        ClapTrap a;

        a.attack("PILAF");
        a.takeDamage(4);
        a.beRepaired(1);
        a.takeDamage(10);
        a.beRepaired(2);
    }
    {
        ClapTrap b ("JINZO");

        b.attack("AEON");
        b.takeDamage(10);
        b.beRepaired(3);
        b.attack("AEON");
    }
}
