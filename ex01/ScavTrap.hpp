/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:40:14 by misaev            #+#    #+#             */
/*   Updated: 2022/03/23 17:41:26 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
    /* Forme canonique */
        ScavTrap();
        ScavTrap(ScavTrap &p);
        void operator=(ScavTrap const &p);
        ~ScavTrap();
    /* END */ 

        ScavTrap(std::string name);
        void attack(const std::string &target);
        void guardGate();
};
