/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:54:50 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/21 13:54:52 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:

        ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap( ScavTrap const &other);
        ScavTrap& operator=( ScavTrap const &other );
        ~ScavTrap( void );

        void	attack( const std::string& target );
        void	guardGate( void );
};

#endif
