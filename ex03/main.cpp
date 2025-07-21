/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:51:49 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/21 14:53:44 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap diamond("DIAMOND");
    diamond.whoAmI();
    diamond.attack("target");
    diamond.guardGate();
    diamond.highFivesGuys();

	return (0);
}
