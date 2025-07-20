#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	{
		std::cout << std::endl << "[ CLAPTRAP ]" << std::endl;
		ClapTrap	robotA;
        ClapTrap	robotB("CLAP-01");

		robotA.attack("N3M3S1S-01");
		robotB.attack("N3M3S1S-02");
		robotB.takeDamage(10);
		robotB.beRepaired(5);
	}
	{
		std::cout << std::endl << "[ SCAVTRAP ]" << std::endl;
		ScavTrap	robotC;
		ScavTrap	robotD("SCAV-01");

		robotC = robotD;
		robotD.attack("D3V1L-00");
		robotC.attack("D3V1L-01");
		robotD.guardGate();
		robotD.takeDamage(100);
		robotD.guardGate();
		robotC.guardGate();
	}
	{
		std::cout << std::endl << "[ FRAGTRAP ]" << std::endl;
		FragTrap	robotE;
		FragTrap	robotF("FRAG-01");

		robotF.attack("BRAT-00");
		robotF.takeDamage(50);
		robotF.beRepaired(20);
		robotF.highFivesGuys();
	}
	return (0);
}
