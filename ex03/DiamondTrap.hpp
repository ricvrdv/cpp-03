/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:54:02 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/21 14:55:32 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp" 

class	DiamondTrap : public FragTrap, public ScavTrap
{
    private:

        std::string _name;
    
    public:

        DiamondTrap( void );
        DiamondTrap( std::string name );
        DiamondTrap( DiamondTrap const &other );
        DiamondTrap& operator=( DiamondTrap const &other );
        ~DiamondTrap( void ); 
        
        void    whoAmI();
};

#endif
