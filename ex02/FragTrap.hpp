/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:55:30 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/21 13:55:33 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:

        FragTrap( void );
        FragTrap( std::string const &name );
        FragTrap( FragTrap const &other );
        FragTrap&   operator=( FragTrap const &other );
        ~FragTrap( void );

        void    highFivesGuys( void );
};

#endif
