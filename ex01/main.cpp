#include "ScavTrap.hpp"

int	main()
{
    {
        ClapTrap	robotA;
        ClapTrap	robotB("CLAP-01");
    }
    {
		ScavTrap	robotC;
		ScavTrap	robotD("SCAV-01");
		ScavTrap	robotE;

		robotE = robotD;
		robotD.attack("D3V1L");
		robotE.attack("D3V1L");
    }
	return (0);
}
