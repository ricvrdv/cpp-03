/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:56:09 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/21 13:56:11 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:

        ScavTrap( void );
        ScavTrap( std::string const &name );
        ScavTrap( ScavTrap const &other);
        ScavTrap& operator=( ScavTrap const &other );
        ~ScavTrap( void );

        void	attack( const std::string& target );
        void	guardGate( void );
};

#endif
